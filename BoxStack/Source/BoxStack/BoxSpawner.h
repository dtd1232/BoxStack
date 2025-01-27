// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoxSpawner.generated.h"

UCLASS()
class BOXSTACK_API ABoxSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoxSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnBox();

private:
	UPROPERTY(EditAnywhere, Category="Spawning");
	FVector SpawnMin;

	UPROPERTY(EditAnywhere, Category="Spawning");
	FVector SpawnMax;

	UPROPERTY(EditAnywhere, Category="Spawning");
	TSubclassOf<AActor> BoxClass;
};
