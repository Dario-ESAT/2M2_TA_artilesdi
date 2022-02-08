// Copyright Epic Games, Inc. All Rights Reserved.

#include "CamaraGameMode.h"
#include "CamaraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACamaraGameMode::ACamaraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
