// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);
	RootComponent = SMComp_;
	simulando_ = false;
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

	ReturnToInitialPosition();
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	check(InputComponent);

	InputComponent->BindAction("Shoot", IE_Pressed, this, &ABall::ShootBall).bConsumeInput = false;

}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABall::ShootBall() {

	if (!simulando_) {
		simulando_ = true;
		SMComp_->SetSimulatePhysics(true);
		SMComp_->AddForce(direction_ * force_ * SMComp_->GetMass());
	}
}

void ABall::ReturnToInitialPosition() {
	simulando_ = false;
	SMComp_->SetSimulatePhysics(false);
	SetActorLocation(InitialPosition_->GetActorLocation());
}
