// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trap.generated.h"

UCLASS()
class PROYECTOFINAL_API ATrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrap();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
	UStaticMeshComponent* SMComp_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trap")
	int id_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trap")
	bool active_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trap")
	FVector unactive_loc_;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Deactivate();
	virtual void Activate();

};
