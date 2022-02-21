// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathPlace.generated.h"

UCLASS()
class PINBALL_API ADeathPlace : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ADeathPlace();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AADeathPlace")
	UStaticMeshComponent* SMComp_;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
