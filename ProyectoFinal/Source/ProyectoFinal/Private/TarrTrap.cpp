// Fill out your copyright notice in the Description page of Project Settings.


#include "TarrTrap.h"
#include "DrawDebugHelpers.h"
#include "Enemy_AI.h"
#include "TimerManager.h"
#include "Components/SphereComponent.h"

ATarrTrap::ATarrTrap(){
	PrimaryActorTick.bCanEverTick = false;
	effect_delay_ = 0.5f;

}
void ATarrTrap::BeginPlay(){
}

void ATarrTrap::CheckEnemy(){
	TArray<FHitResult> hits;
	FVector location = GetActorLocation();
	
	GetWorld()->SweepMultiByProfile(hits, location, location,FQuat(), FName("OverlapAllDynamic"), FCollisionShape::MakeBox(box_half_extent_));
	//DrawDebugBox(GetOwner()->GetWorld(), location, box_half_extent_ * 2.0f, FColor::Green, false, 0.1f);

	for(FHitResult item : hits){
		if(item.Actor->IsA(AEnemy_AI::StaticClass())){
			AEnemy_AI* enemy = Cast<AEnemy_AI>(item.Actor);
			enemy->StartSlowEffect();
		}
	}

}

void ATarrTrap::Deactivate(){
	active_ = false;

	if(GetWorldTimerManager().IsTimerActive(myTimerHandle))
		GetWorldTimerManager().ClearTimer(myTimerHandle);
}

void ATarrTrap::Activate(){
	GetWorld()->GetTimerManager().SetTimer(myTimerHandle, this, &ATarrTrap::CheckEnemy, effect_delay_, true);
	active_ = true;
}

