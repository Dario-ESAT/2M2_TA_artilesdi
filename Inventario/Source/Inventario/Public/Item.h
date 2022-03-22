// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUpItem.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class INVENTARIO_API AItem : public AActor, public IPickUpItem
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AItem();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Forma")
	class UStaticMeshComponent* SMComp_;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUpable")
	bool PickUp();
	bool PickUp_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUpable")
	bool Drop(FVector position);
	bool Drop_Implementation(FVector position);


};
