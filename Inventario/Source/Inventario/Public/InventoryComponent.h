// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatform.h"
#include "Components/SceneComponent.h"
#include "Item.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FInventoryInfo {
	GENERATED_USTRUCT_BODY()
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventario")
	TMap<int32,UItem*> Slots;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTARIO_API UInventoryComponent : public UActorComponent {
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventario")
		FInventoryInfo inventory_;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void TakeItem();

	void DropItem();
		
};
