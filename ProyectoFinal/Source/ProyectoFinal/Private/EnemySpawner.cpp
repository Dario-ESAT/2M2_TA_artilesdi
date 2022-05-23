// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "Enemy_AI.h"
#include "DefenseObjective.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	RootComponent = SMComp_;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::SpawnEnemies() {
	for(int i = 0; i < max_enemies_; i++){
		AEnemy_AI* new_enemy = GetWorld()->SpawnActor<AEnemy_AI>(enemy_, GetActorLocation(), FRotator());
		enemy_arr_.Add(new_enemy);
		new_enemy->id_ = i;
		new_enemy->SetActorLocation(FVector(10000,10000,10000));
		new_enemy->unactive_loc_ = FVector(10000, 10000, 10000);
	}
}

