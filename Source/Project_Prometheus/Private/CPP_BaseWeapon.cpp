// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BaseWeapon.h"
#include "MyAbilitySystemComponent.h"


// Sets default values
ACPP_BaseWeapon::ACPP_BaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialise abilitiy system componet
	AbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

}

// Called when the game starts or when spawned
void ACPP_BaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_BaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

