// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Attributes/PromCharacterAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPromCharacterAttributeSet::OnRep_CurrentHealth(const FGameplayAttributeData& OldCurrentHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPromCharacterAttributeSet, CurrentHealth, OldCurrentHealth);
}

void UPromCharacterAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UPromCharacterAttributeSet, MaxHealth, OldMaxHealth);
}

void UPromCharacterAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UPromCharacterAttributeSet, CurrentHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UPromCharacterAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}


