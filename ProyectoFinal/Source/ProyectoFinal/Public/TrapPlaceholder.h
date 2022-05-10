// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trap.h"
#include "TrapPlaceholder.generated.h"

UCLASS()
class PROYECTOFINAL_API ATrapPlaceholder : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = Placeholder)
	TSubclassOf<ATrap> trap_;

public:	
	// Sets default values for this actor's properties
	ATrapPlaceholder();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
	UStaticMeshComponent* SMComp_;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
