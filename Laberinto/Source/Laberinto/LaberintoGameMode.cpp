// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaberintoGameMode.h"
#include "LaberintoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaberintoGameMode::ALaberintoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
