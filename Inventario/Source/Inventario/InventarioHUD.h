// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InventarioHUD.generated.h"

UCLASS()
class AInventarioHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInventarioHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

