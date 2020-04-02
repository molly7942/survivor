// Fill out your copyright notice in the Description page of Project Settings.


#include "cPlayerCamera.h"

// Sets default values
AcPlayerCamera::AcPlayerCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AcPlayerCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AcPlayerCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AcPlayerCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

