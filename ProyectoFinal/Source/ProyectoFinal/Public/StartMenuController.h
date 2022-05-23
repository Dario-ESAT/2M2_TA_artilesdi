// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StartMenuController.generated.h"
class UButton;

UCLASS()
class PROYECTOFINAL_API UStartMenuController : public UUserWidget
{
	GENERATED_BODY()

public:

  UPROPERTY(BlueprintReadWrite, Category = "Buttons", meta = (BindWidget))
  UButton* start_button_;

  FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;

  UFUNCTION()
  void StartGame();

  void NativeOnInitialized() override;
  void NativeDestruct() override;
};
