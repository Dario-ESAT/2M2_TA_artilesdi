// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventarioGameMode.h"
#include "InventarioHUD.h"
#include "InventarioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInventarioGameMode::AInventarioGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInventarioHUD::StaticClass();
}
