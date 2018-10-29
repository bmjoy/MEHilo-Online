// Fill out your copyright notice in the Description page of Project Settings.

#include "MehiloOnlineGameInstance.h"

#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"

#include "MenuSystem/MainMenu.h"
#include "MenuSystem/MenuWidget.h"
#include "MenuSystem/InGameMenu.h"

const static FName SESSION_NAME = TEXT("Game");
const static FName SERVER_NAME_SETTINGS_KEY = TEXT("ServerName");


UMehiloOnlineGameInstance::UMehiloOnlineGameInstance(const FObjectInitializer & ObjectInitializer) 
{
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/MenuSystem/WBP_MainMenu"));
	if (!ensure(MenuBPClass.Class != nullptr)) return;

	MenuClass = MenuBPClass.Class;
	
	ConstructorHelpers::FClassFinder<UUserWidget> InGameMenuBPClass(TEXT("/Game/MenuSystem/WBP_InGameMenu"));
	if (!ensure(InGameMenuBPClass.Class != nullptr)) return;

	InGameMenuClass = InGameMenuBPClass.Class;
}

void UMehiloOnlineGameInstance::InGameLoadMenu()
{
	if (!ensure(InGameMenuClass != nullptr)) return;

	UMenuWidget* Menu = CreateWidget<UMenuWidget>(this, InGameMenuClass);
	if (!ensure(Menu != nullptr)) return;

	Menu->Setup();
	Menu->SetMenuInterface(this);
}

void UMehiloOnlineGameInstance::RefreshServerList()
{
	SessionSearch = MakeShareable(new FOnlineSessionSearch);
	if (SessionSearch.IsValid())
	{
		// SessionSearch->bIsLanQuery = true;
		SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
		SessionSearch->MaxSearchResults = 100;
		UE_LOG(LogTemp, Warning, TEXT("Starting Find Session"));
		SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());
		SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UMehiloOnlineGameInstance::OnFindSessionsComplete);
	}
}

void UMehiloOnlineGameInstance::LoadMenuWidget()
{	
	if (!ensure(MenuClass != nullptr)) return;

	Menu = CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;

	Menu->Setup();
	Menu->SetMenuInterface(this);
}

void UMehiloOnlineGameInstance::Init()
{	
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem != nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Found Subsystem %s"), *Subsystem->GetSubsystemName().ToString());
		SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid()) {
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UMehiloOnlineGameInstance::OnCreateSessionComplete);
			// SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &UMehiloOnlineGameInstance::OnDestroySessionComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &UMehiloOnlineGameInstance::OnJoinSessionComplete);
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Found no Subsystem"));
	}
}

void UMehiloOnlineGameInstance::Host(FString ServerName)
{	
	DesiredServerName = ServerName;
	if (SessionInterface.IsValid()) {
		FNamedOnlineSession* ExistingSession = SessionInterface->GetNamedSession(SESSION_NAME);
		if (ExistingSession != nullptr)
		{
			SessionInterface->DestroySession(SESSION_NAME);
		}
		else
		{
			CreateSession();
		}

	}
}

void  UMehiloOnlineGameInstance::OnFindSessionsComplete(bool Success)
{
	
	if (Success && SessionSearch.IsValid() && Menu != nullptr)
	{	
		TArray<FServerData> ServerNames;

		UE_LOG(LogTemp, Warning, TEXT("Find Session complete"));
		for (const FOnlineSessionSearchResult& SearchResult : SessionSearch->SearchResults)
		{
			UE_LOG(LogTemp, Warning, TEXT("Found session %s"), *SearchResult.GetSessionIdStr());
			FServerData Data;
			Data.MaxPlayers = SearchResult.Session.SessionSettings.NumPublicConnections;
			Data.CurrentPlayers = Data.MaxPlayers - SearchResult.Session.NumOpenPublicConnections;
			Data.HostUsername = SearchResult.Session.OwningUserName;
			FString ServerName;
			if (SearchResult.Session.SessionSettings.Get(SERVER_NAME_SETTINGS_KEY, ServerName))
			{
				Data.Name = ServerName;
			}
			else
			{
				Data.Name = "Could not find name.";
			}
			ServerNames.Add(Data);
		}

		Menu->SetServerList(ServerNames);
	}
}

void UMehiloOnlineGameInstance::CreateSession()
{	
	if (SessionInterface.IsValid())
	{
		FOnlineSessionSettings SessionSettings;
		if (IOnlineSubsystem::Get()->GetSubsystemName() == "NULL")
		{
			SessionSettings.bIsLANMatch = true;
		}
		else
		{
			SessionSettings.bIsLANMatch = false;
		}

		SessionSettings.NumPublicConnections = 5;
		SessionSettings.bShouldAdvertise = true;
		SessionSettings.bUsesPresence = true;
		SessionSettings.Set(SERVER_NAME_SETTINGS_KEY, DesiredServerName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

		SessionInterface->CreateSession(0, SESSION_NAME, SessionSettings);
	}
}


void UMehiloOnlineGameInstance::OnDestroySessionComplete(FName SessionName, bool Success)
{
	if (Success) {
		CreateSession();
	}
}
void UMehiloOnlineGameInstance::OnCreateSessionComplete(FName SessionName, bool Success)
{	
	if (Success){
		if (Menu != nullptr)
		{
			Menu->Teardown();
		}
		UEngine* Engine = GetEngine();
		if (!ensure(Engine != nullptr)) return;

		Engine->AddOnScreenDebugMessage(-1, 2, FColor::Green, TEXT("Hosting"));

		UWorld* World = GetWorld();
		if (!ensure(World != nullptr)) return;
		World->ServerTravel("/Game/MehiloOnline/Maps/Lobby?listen");
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Could not create session"));
		return;
	}
}

void UMehiloOnlineGameInstance::Join(uint32 Index)
{	
	if (!SessionInterface.IsValid()) return;

	if (!SessionSearch.IsValid()) return;

	if (Menu != nullptr)
	{	
		Menu->Teardown();
	}
	SessionInterface->JoinSession(0, SESSION_NAME, SessionSearch->SearchResults[Index]);	
}
void UMehiloOnlineGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{	
	if (!SessionInterface.IsValid()) return;
	if (!SessionSearch.IsValid()) return;

	FString Address;
	if(!SessionInterface->GetResolvedConnectString(SessionName, Address))
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not get connect string."));
		return;
	}
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(-1, 7, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ClientTravel(Address, TRAVEL_Absolute);
}

void UMehiloOnlineGameInstance::StartSession()
{
	if (SessionInterface.IsValid())
	{
		SessionInterface->StartSession(SESSION_NAME);
	}
}


void UMehiloOnlineGameInstance::LoadMainMenu()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ClientTravel("/Game/MenuSystem/MainMenu", TRAVEL_Absolute);

}

void UMehiloOnlineGameInstance::Exit()
{
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand(TEXT("Exit"));
}
