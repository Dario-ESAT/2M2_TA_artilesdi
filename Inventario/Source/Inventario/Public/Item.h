// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class INVENTARIO_API AItem : public AActor, public IPickUpItem
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Forma")
	UStaticMeshComponent* SMComp_;
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
