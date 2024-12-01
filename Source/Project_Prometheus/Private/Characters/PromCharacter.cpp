// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PromCharacter.h"
#include "AbilitySystemComponent.h"
#include "Characters/Attributes/PromCharacterAttributeSet.h"


// Sets default values
APromCharacter::APromCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	CharacterAttributeSet = CreateDefaultSubobject<UPromCharacterAttributeSet>(TEXT("CharacterAttributeSet"));
}

UAbilitySystemComponent* APromCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void APromCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitializeAttributes();
}

void APromCharacter::InitializeAttributes()
{
	if (AbilitySystemComponent && AbilitySystemComponent)
	{
		//Apply default effects
	}
}

// Called every frame
void APromCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APromCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

