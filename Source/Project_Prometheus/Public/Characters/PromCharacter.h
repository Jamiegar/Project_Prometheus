// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "PromCharacter.generated.h"

class AbilitySystemComponent;
class UPromCharacterAttributeSet;

UCLASS()
class PROJECT_PROMETHEUS_API APromCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APromCharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void InitializeAttributes();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
	UPromCharacterAttributeSet* CharacterAttributeSet;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
