// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoFinalGameMode.h"
#include "ProyectoFinalCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProyectoFinalGameMode::AProyectoFinalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
