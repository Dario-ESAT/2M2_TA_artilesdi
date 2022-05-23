// Fill out your copyright notice in the Description page of Project Settings.


#include "StartMenuController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UStartMenuController::NativeOnInitialized(){
  Super::NativeOnInitialized();
  start_button_->OnClicked.AddDynamic(this, &UStartMenuController::StartGame);
}

FReply UStartMenuController::NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent){
  Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
  start_button_->SetUserFocus(GetOwningPlayer());

  return FReply::Handled();
}

void UStartMenuController::StartGame(){
  UGameplayStatics::OpenLevel(GetWorld(), "Game");
}


void UStartMenuController::NativeDestruct(){
  Super::NativeDestruct();
  if(start_button_->OnClicked.IsBound()){
    start_button_->OnClicked.Remove(this, "StartGame");
  }
}
