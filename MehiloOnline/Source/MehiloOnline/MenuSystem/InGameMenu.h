// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInterface.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class MEHILOONLINE_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()

public:
	bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* CancelButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;
	
	UFUNCTION()
	void CancelPressed();

	UFUNCTION()
	void QuitPressed();
	
};
