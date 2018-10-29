// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TimerManager.h"
#include "MehiloOnlineGameMode.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MEHILOONLINE_API ALobbyGameMode : public AMehiloOnlineGameMode
{
	GENERATED_BODY()

public:
	void PostLogin(APlayerController* NewPlayer) override;

	void Logout(AController* Exiting) override;

private:

	void StartGame();

	uint32 NumberOfPlayers = 0;

	FTimerHandle GameStartTimer;

};
