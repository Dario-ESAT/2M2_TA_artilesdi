// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PickUpItem.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI,BlueprintType)
class UPickUpItem : public UInterface {
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTARIO_API IPickUpItem {
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUpable")
	bool PickUp();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PickUpable")
	bool Drop(FVector position);
};
