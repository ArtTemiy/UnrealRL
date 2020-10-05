// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "Serializer.h"

// Sets default values
ASerializer::ASerializer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASerializer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASerializer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

