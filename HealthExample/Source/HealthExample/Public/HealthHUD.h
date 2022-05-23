// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HealthHUD.generated.h"

class UUserWidget;
/**
 * 
 */
UCLASS()
class HEALTHEXAMPLE_API AHealthHUD : public AHUD
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HUD")
	TSubclassOf<UUserWidget> HealthHUD;

	UPROPERTY()
	class UWHealthValue* HealthWidget;
	
	void BeginPlay() override;
	
};
