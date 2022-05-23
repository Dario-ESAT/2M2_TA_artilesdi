// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthHUD.h"
#include "Engine/GameInstance.h"
#include "Dariotonto.generated.h"

/**
 * 
 */
UCLASS()
class HEALTHEXAMPLE_API UDariotonto : public UGameInstance {

	GENERATED_BODY()
	
	public:
	FDiedEvent event;

	int32 CurrentHealth = 100;
	int32 MaxHealth = 100;

	void Init() override;

	

};
