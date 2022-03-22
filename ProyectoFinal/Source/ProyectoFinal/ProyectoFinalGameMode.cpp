// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoFinalGameMode.h"
#include "ProyectoFinalPlayerController.h"
#include "ProyectoFinalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyectoFinalGameMode::AProyectoFinalGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProyectoFinalPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}