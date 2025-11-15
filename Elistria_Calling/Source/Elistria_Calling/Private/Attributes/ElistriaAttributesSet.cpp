// Fill out your copyright notice in the Description page of Project Settings.


#include "Attributes/ElistriaAttributesSet.h"

UElistriaAttributesSet::UElistriaAttributesSet()
{
	InitArchery(1);
	InitAthletics(1);
	InitDeceit(1);
	InitDefensibility(1);
	InitDiscernment(1);
	InitLightWeaponry(1);
	InitHeavyWeaponry(1);
	InitPerception(1);
	InitStealth(1);
	InitSurvival(1);
	InitAttributePoints(0);
}

void UElistriaAttributesSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Archery, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Athletics, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Deceit, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Defensibility, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Discernment, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, LightWeaponry, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, HeavyWeaponry, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Perception, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Stealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, Survival, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UElistriaAttributesSet, AttributePoints, COND_None, REPNOTIFY_Always);
}

void UElistriaAttributesSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}

void UElistriaAttributesSet::OnRep_Archery(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Archery, OldValue);
}
void UElistriaAttributesSet::OnRep_Athletics(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Athletics, OldValue);
}
void UElistriaAttributesSet::OnRep_Deceit(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Deceit, OldValue);
}
void UElistriaAttributesSet::OnRep_Defensibility(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Defensibility, OldValue);
}
void UElistriaAttributesSet::OnRep_Discernment(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Discernment, OldValue);
}
void UElistriaAttributesSet::OnRep_LightWeaponry(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, LightWeaponry, OldValue);
}
void UElistriaAttributesSet::OnRep_HeavyWeaponry(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, HeavyWeaponry, OldValue);
}
void UElistriaAttributesSet::OnRep_Perception(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Perception, OldValue);
}
void UElistriaAttributesSet::OnRep_Stealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Stealth, OldValue);
}
void UElistriaAttributesSet::OnRep_Survival(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Survival, OldValue);
}
void UElistriaAttributesSet::OnRep_AttributePoints(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, AttributePoints, OldValue);
}
void UElistriaAttributesSet::OnRep_Thievery(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Thievery, OldValue);
}
void UElistriaAttributesSet::OnRep_Will(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UElistriaAttributesSet, Will, OldValue);
}
