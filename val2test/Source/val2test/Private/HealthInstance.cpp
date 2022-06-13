// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthInstance.h"

void UHealthInstance::Init() {
	Super::PostInitProperties();

	player_max_health_ = 60.0f;

	player_current_health_ = player_max_health_;
}
