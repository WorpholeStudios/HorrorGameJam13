﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "GameBooth/HG_GameBoothBase.h"


// Sets default values
AHG_GameBoothBase::AHG_GameBoothBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHG_GameBoothBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHG_GameBoothBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

