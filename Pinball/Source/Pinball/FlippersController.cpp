// Fill out your copyright notice in the Description page of Project Settings.


#include "FlippersController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFlippersController::AFlippersController()
{
	PrimaryActorTick.bCanEverTick = true;

	center_pivot_ = CreateDefaultSubobject<USceneComponent>(TEXT("Center_Pivot_"));
	RootComponent = center_pivot_;

	//Init meshes
	right_flipper_mesh_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right_Flipper"));
	left_flipper_mesh_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left_Flipper"));
	
	//Init pivots
	right_flipper_pivot_ = CreateDefaultSubobject<USceneComponent>(TEXT("Right_Flipper_Pivot"));
	left_flipper_pivot_ = CreateDefaultSubobject<USceneComponent>(TEXT("Left_Flipper_Pivot"));

	//Setting attachments
	right_flipper_mesh_->SetupAttachment(right_flipper_pivot_);
	left_flipper_mesh_->SetupAttachment(left_flipper_pivot_);

	left_flipper_pivot_->SetupAttachment(center_pivot_);
	right_flipper_pivot_->SetupAttachment(center_pivot_);

}

// Called when the game starts or when spawned
void AFlippersController::BeginPlay()
{
	Super::BeginPlay();

	check(InputComponent);

	InputComponent->BindAction("Left", IE_Pressed, this, &AFlippersController::KickLeft).bConsumeInput = false;
	InputComponent->BindAction("Right", IE_Pressed, this, &AFlippersController::KickRight).bConsumeInput = false;
}

// Called every frame
void AFlippersController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*if(is_rotating_ && count_ < time_to_rotate_) {

	}*/
}

// Called to bind functionality to input
void AFlippersController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFlippersController::StartKick() {
	is_rotating_ = true;
	count_ = 0;
}

void AFlippersController::EndKick() {
	is_rotating_ = false;
	count_ = 0;
}

void AFlippersController::KickLeft() {
	left_flipper_pivot_->(FQuat());
}

void AFlippersController::KickRight()
{
}

