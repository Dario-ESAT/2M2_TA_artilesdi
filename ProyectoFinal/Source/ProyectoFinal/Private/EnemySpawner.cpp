// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "Enemy_AI.h"
#include "DefenseObjective.h"
#include "TimerManager.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	RootComponent = SMComp_;

	enemy_unactive_loc = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	enemy_unactive_loc->SetupAttachment(RootComponent);

	spawn_delay_ = 5.0f;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	//GenerateEnemies();

	//GetWorld()->GetTimerManager().SetTimer(myTimerHandle, this, &AEnemySpawner::SpawnEnemy, spawn_delay_, true);


}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::GenerateEnemies() {
	for(int i = 0; i < max_enemies_; i++){
		AEnemy_AI* new_enemy = GetWorld()->SpawnActor<AEnemy_AI>(enemy_, enemy_unactive_loc->GetComponentLocation(), FRotator());
		if(new_enemy != nullptr){
			FString x = FString::Printf(TEXT("Enemy: %d"),i);
			GEngine->AddOnScreenDebugMessage(i + 203444, 2, FColor::Green, x);
			enemy_arr_.Add(new_enemy);
			new_enemy->id_ = i;
			new_enemy->unactive_loc_ = enemy_unactive_loc->GetComponentLocation();
			new_enemy->Die();
		}
	}
}

void AEnemySpawner::SpawnEnemy(){
	for(int i = 0; i < max_enemies_; i++){
		AEnemy_AI* enemy = enemy_arr_[i];
		if(!enemy->active_){
			enemy->SetActorLocation(GetActorLocation());
			enemy->Move();
			return;
		}
	}
}


