// Copyright Epic Games, Inc. All Rights Reserved.

#include "val2testGameMode.h"
#include "val2testCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "HealthInstance.h"
#include "Kismet/GameplayStatics.h"

Aval2testGameMode::Aval2testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void Aval2testGameMode::BeginPlay() {
	Super::BeginPlay();

	UHealthInstance* health = Cast<UHealthInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	health->event.AddDynamic(this, &Aval2testGameMode::ReloadLevel);
}

void Aval2testGameMode::ReloadLevel(int32 ola) {
	UHealthInstance* health = Cast<UHealthInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	//	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("health = %f"), health->player_current_health_));

	health->player_current_health_ = health->player_max_health_;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("health = %f"), health->player_current_health_));


	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ese qlo vota kk"));


	//
	//UGameplayStatics::OpenLevel(GetWorld(), "ThirdPersonExampleMap");
}
