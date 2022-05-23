// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WHealthValue.generated.h"

/**
 * 
 */
UCLASS()
class HEALTHEXAMPLE_API UWHealthValue : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UProgressBar* HealthBar;

	UFUNCTION()
	void SetHealthValue(int32 newValue, int32 maxValue);
	
};
