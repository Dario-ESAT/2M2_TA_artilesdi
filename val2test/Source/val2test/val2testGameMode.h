// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "val2testGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiedEvent, int32, ola);

UCLASS(minimalapi)
class Aval2testGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	Aval2testGameMode();

	virtual void BeginPlay() override;

	UFUNCTION()
	void ReloadLevel(int32 ola);
};



