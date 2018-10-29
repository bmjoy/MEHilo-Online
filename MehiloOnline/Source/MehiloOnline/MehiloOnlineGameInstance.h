// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionInterface.h"

#include "MenuSystem/MenuInterface.h"
#include "MehiloOnlineGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MEHILOONLINE_API UMehiloOnlineGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()

public:
	UMehiloOnlineGameInstance(const FObjectInitializer & ObjectInitializer);
	
	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenuWidget();

	UFUNCTION(BlueprintCallable)
	void InGameLoadMenu();

	UFUNCTION(Exec)
	void Host(FString ServerName) override;

	UFUNCTION(Exec)
	void Join(uint32 Index) override;

	void StartSession();

	virtual void LoadMainMenu() override;

	void RefreshServerList() override;

	virtual void Exit();



private:
	TSubclassOf<class UUserWidget> MenuClass;
	TSubclassOf<class UUserWidget> InGameMenuClass;

	class UMainMenu* Menu;

	IOnlineSessionPtr SessionInterface;
	TSharedPtr<class FOnlineSessionSearch> SessionSearch;

	void OnCreateSessionComplete(FName SessionName, bool Success);
	void OnDestroySessionComplete(FName SessionName, bool Success);
	void OnFindSessionsComplete(bool Success);
	void OnJoinSessionComplete(FName InSessionName, EOnJoinSessionCompleteResult::Type InResult);

	FString DesiredServerName;
	void CreateSession();
};
