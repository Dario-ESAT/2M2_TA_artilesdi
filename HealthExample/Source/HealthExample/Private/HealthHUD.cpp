// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthHUD.h"

#include "Blueprint/UserWidget.h"
#include "WHealthValue.h"

void AHealthHUD::BeginPlay()
{
	Super::BeginPlay();

	HealthWidget = 
	CreateWidget<UWHealthValue>(
		GetOwningPlayerController(),
		HealthHUD
		);

	HealthWidget->AddToViewport();
}
