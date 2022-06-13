// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcherTrap.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Proyectile.h"
#include "Enemy_AI.h"

AArcherTrap::AArcherTrap(){

  RootComponent = SMComp_;

  CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
  CollisionComp->InitSphereRadius(400.0f);
  CollisionComp->SetupAttachment(RootComponent);

  shoot_location_ = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
  shoot_location_->SetupAttachment(RootComponent);

  enemy_detected_ = false;

  fire_rate_ = 1.0f;
  
}

void AArcherTrap::BeginPlay(){
  Super::BeginPlay();

  CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AArcherTrap::BeginOverlap);
}

void AArcherTrap::BeginOverlap(UPrimitiveComponent* OveralappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){
  if(OtherActor->IsA(AEnemy_AI::StaticClass()) && active_){
    FString x = FString::Printf(TEXT("Enemy!"));
    GEngine->AddOnScreenDebugMessage(1323, 1, FColor::Green, x);
    enemy_objective_ = Cast<AEnemy_AI>(OtherActor);
    ShootEnemy();
  }
}

void AArcherTrap::ShootEnemy(){
  if(enemy_objective_ != nullptr&& enemy_objective_->active_){

  FireProyectile();
  GetWorld()->GetTimerManager().SetTimer(myTimerHandle, this,
                                         &AArcherTrap::FireProyectile, fire_rate_, true);
  } else{
    enemy_objective_ = nullptr;
    StopShootingEnemy();
  }
}

void AArcherTrap::FireProyectile(){

  FVector direction = enemy_objective_->GetActorLocation() - shoot_location_->GetComponentLocation() ;
  direction.Normalize();

  FActorSpawnParameters ActorSpawnParams;
  ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
  //FString x = FString::Printf(TEXT("Initial: x-%f y-%f z-%f\nDirection: x-%f y-%f z-%f"), shoot_location_->GetComponentLocation().X, shoot_location_->GetComponentLocation().Y, shoot_location_->GetComponentLocation().Z,direction.X, direction.Y, direction.Z);
  //GEngine->AddOnScreenDebugMessage(12, 1, FColor::Green, x);
  AProyectile* new_proyectile = GetWorld()->SpawnActor<AProyectile>(proyectile_, shoot_location_->GetComponentLocation(), direction.Rotation(), ActorSpawnParams);

}

void AArcherTrap::StopShootingEnemy(){
  GetWorld()->GetTimerManager().ClearTimer(myTimerHandle);
  GetWorld()->GetTimerManager().SetTimer(myTimerHandleCheckEnemy, this,
                                         &AArcherTrap::CheckEnemyInArea, 3.0f, true);
}

void AArcherTrap::CheckEnemyInArea(){
  TArray<AActor*> overlaping;

  CollisionComp->GetOverlappingActors(overlaping,TSubclassOf<AEnemy_AI>());
  for(int i = 0; i < overlaping.Num(); i++){
    enemy_objective_ = Cast<AEnemy_AI>(overlaping[i]);
    ShootEnemy();
    return;
  }

  if(GetWorldTimerManager().IsTimerActive(myTimerHandleCheckEnemy))
    GetWorld()->GetTimerManager().ClearTimer(myTimerHandleCheckEnemy);

}

void AArcherTrap::Activate(){
  active_ = true;
  CheckEnemyInArea();
}


