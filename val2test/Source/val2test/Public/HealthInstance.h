// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "../val2testGameMode.h"
#include "HealthInstance.generated.h"


/**
 * 
 */
UCLASS()
class VAL2TEST_API UHealthInstance : public UGameInstance {
	GENERATED_BODY()

public:

	FDiedEvent event;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "health")
	float player_max_health_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "health")
	float player_current_health_;

	void Init() override;
};
