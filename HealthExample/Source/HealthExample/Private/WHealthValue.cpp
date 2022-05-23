// Fill out your copyright notice in the Description page of Project Settings.


#include "WHealthValue.h"
#include "Components/ProgressBar.h"

void UWHealthValue::SetHealthValue(int32 newValue, int32 maxValue)
{
	HealthBar->SetPercent((float)newValue / (float)maxValue);
	
}
