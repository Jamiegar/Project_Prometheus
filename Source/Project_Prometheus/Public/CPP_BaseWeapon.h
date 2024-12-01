// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_BaseWeapon.generated.h"

class UMyAbilitySystemComponent;


UCLASS()
class PROJECT_PROMETHEUS_API ACPP_BaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_BaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Ability system component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Abilities")
	UMyAbilitySystemComponent* AbilitySystemComponent;

};
