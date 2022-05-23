// Copyright Epic Games, Inc. All Rights Reserved.

#include "HealthExampleGameMode.h"
#include "HealthExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHealthExampleGameMode::AHealthExampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
