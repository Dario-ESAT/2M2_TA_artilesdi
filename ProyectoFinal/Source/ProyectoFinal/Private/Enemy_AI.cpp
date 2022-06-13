// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_AI.h"

#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include "NavigationSystem.h"
#include "EnemyAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
// Sets default values
AEnemy_AI::AEnemy_AI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	active_ = true;
	movement_comp_ = Cast<UCharacterMovementComponent>(GetMovementComponent());
	slow_time_ = 1.0f;
	slow_factor_ = 0.40f;
	base_hp_ = 40.0f;
}

// Called when the game starts or when spawned
void AEnemy_AI::BeginPlay()
{
	Super::BeginPlay();
	//FString x = FString::Printf(TEXT("Objective= x-%f y-%f z-%f"), objective_.X, objective_.Y, objective_.Z);
	//GEngine->AddOnScreenDebugMessage(22227, 134, FColor::Green, x);

	unactive_loc_ = GetActorLocation();

	original_speed = movement_comp_->MaxWalkSpeed;

	ai_controller = Cast<AEnemyAIController>(GetController());
	ai_controller->GetPathFollowingComponent()->OnRequestFinished.AddUObject
	(this, &AEnemy_AI::OnAIMoveCompleted);
	//active_ = true;
	Move();
}

// Called every frame
void AEnemy_AI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_AI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy_AI::OnAIMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result){
	GEngine->AddOnScreenDebugMessage(2222, 1, FColor::Green, "Donete :)");
	ai_controller->RandomPatrol();
}

void AEnemy_AI::Move(){
	//FString x = FString::Printf(TEXT("Objective= x-%f y-%f z-%f"), objective_.X, objective_.Y, objective_.Z);
	//GEngine->AddOnScreenDebugMessage(222, 134, FColor::Green, x);

	ai_controller->MoveToLocation(objective_,0.0f,true);
	//GetWorld()->GetTimerManager().SetTimer(myTimerHandleMovement, this, &AEnemy_AI::Move, 3.0f, false);
}

void AEnemy_AI::Die(){
	SetActorLocation(unactive_loc_);
	Move();
	//active_ = false;
	movement_comp_->StopActiveMovement();
}

void AEnemy_AI::StartSlowEffect(){
	if(!GetWorldTimerManager().IsTimerActive(myTimerHandle)){
		movement_comp_->MaxWalkSpeed = movement_comp_->MaxWalkSpeed * slow_factor_;
	} 
	
	GetWorld()->GetTimerManager().SetTimer(myTimerHandle, this, &AEnemy_AI::StopSlowEffect, slow_time_, false);
}

void AEnemy_AI::TakeDmg(float dmg){
	hp_ -= dmg;

	if(hp_ <= 0.0f){
		Die();
	}

}

void AEnemy_AI::StopSlowEffect(){
	movement_comp_->MaxWalkSpeed = original_speed;
}

