// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"

USTRUCT()
struct FServerData
{
	GENERATED_BODY()

	FString Name;
	uint16 CurrentPlayers;
	uint16 MaxPlayers;
	FString HostUsername;
};

/**
 * 
 */
UCLASS()
class MEHILOONLINE_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()	

public:
	UMainMenu(const FObjectInitializer & ObjectInitializer);

	void SetServerList(TArray<FServerData> ServerNames);

	void SelectIndex(uint32 Index);

protected:
	virtual bool Initialize();
	
private:

	void UpdateChildren();
	TSubclassOf<class UUserWidget> ServerRowClass;

	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* ExitButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* JoinButton;

	UPROPERTY(meta = (BindWidget))	// the actual join button in the join menu.
	class UButton* ConfirmJoinMenuButton;			

	UPROPERTY(meta = (BindWidget))
	class UButton* CancelJoinMenuButton;

	UPROPERTY(meta = (BindWidget))	// the actual host button in the host menu.
	class UButton* ConfirmHostMenuButton;

	UPROPERTY(meta = (BindWidget))
	class UEditableTextBox* ServerHostName;

	UPROPERTY(meta = (BindWidget))	
	class UButton* CancelHostMenuButton;

	UPROPERTY(meta = (BindWidget))
	class UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
	class UWidget* MainMenu;

	UPROPERTY(meta = (BindWidget))
	class UWidget* JoinMenu;

	UPROPERTY(meta = (BindWidget))
	class UWidget* HostMenu;

	UPROPERTY(meta = (BindWidget))
	class UPanelWidget* ServerList;

	UFUNCTION()
	void HostServer();

	UFUNCTION()
	void JoinServer();
	
	UFUNCTION()
	void OpenMainMenu();

	UFUNCTION()
	void OpenJoinMenu();

	UFUNCTION()
	void OpenHostMenu();

	UFUNCTION()
	void Exit();
	
	TOptional<uint32> SelectedIndex;
};
