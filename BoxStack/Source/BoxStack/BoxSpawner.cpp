// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxSpawner.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ABoxSpawner::ABoxSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnMin = FVector(0.f, 0.f, 500.f);
	SpawnMax = FVector(2000.f, 2000.f, 500.f);
}

// Called when the game starts or when spawned
void ABoxSpawner::BeginPlay()
{
	Super::BeginPlay();

	SpawnBox();
}

// Called every frame
void ABoxSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoxSpawner::SpawnBox()
{
	if(BoxClass)
	{
		FVector RandomLocation = UKismetMathLibrary::RandomPointInBoundingBox((SpawnMax + SpawnMin) / 2, (SpawnMax - SpawnMin) / 2);
	}
}

