// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	LightComp_ = CreateDefaultSubobject<UPointLightComponent>(
		TEXT("Light")
		);
	RootComponent = SMComp_;

	LightComp_->SetupAttachment(SMComp_);
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay() {
	Super::BeginPlay();
	frames = 10.0f;
	count = 0.0f;
}

//// Called every frame
void ATestActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (count > frames) {
		LightComp_->SetIntensity(intensity_);
		count = 0.0f;
	} else {
		frames += DeltaTime;
	}
}

