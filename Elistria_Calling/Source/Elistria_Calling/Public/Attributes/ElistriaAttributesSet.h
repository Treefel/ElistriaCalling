// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ElistriaAbilitySystemComponent.h"
#include "ElistriaAttributeSetBase.h"
#include  "Net/UnrealNetwork.h"
#include "ElistriaAttributesSet.generated.h"

/**
 * 
 */
UCLASS()
class ELISTRIA_CALLING_API UElistriaAttributesSet : public UElistriaAttributeSetBase
{
	GENERATED_BODY()
public:
	UElistriaAttributesSet();
	 virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Archery)
	FGameplayAttributeData Archery;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Archery)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Athletics)
	FGameplayAttributeData Athletics;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Athletics)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Deceit)
	FGameplayAttributeData Deceit;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Deceit)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_Defensibility)
	FGameplayAttributeData Defensibility;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Defensibility)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Discernment)
	FGameplayAttributeData Discernment;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Discernment)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_LightWeaponry)
	FGameplayAttributeData LightWeaponry;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, LightWeaponry)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_HeavyWeaponry)
	FGameplayAttributeData HeavyWeaponry;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, HeavyWeaponry)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Perception)
	FGameplayAttributeData Perception;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Perception)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Stealth)
	FGameplayAttributeData Stealth;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Stealth)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Survival)
	FGameplayAttributeData Survival;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Survival)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Thievery)
	FGameplayAttributeData Thievery;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Thievery)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_Will)
	FGameplayAttributeData Will;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, Will)
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AttributePoints)
	FGameplayAttributeData AttributePoints;
	ATTRIBUTE_ACCESSORS(UElistriaAttributesSet, AttributePoints)
	
	UFUNCTION()
	void OnRep_Archery(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Athletics(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Deceit(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Defensibility(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Discernment(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_LightWeaponry(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_HeavyWeaponry(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Perception(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Stealth(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Survival(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Thievery(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Will(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_AttributePoints(const FGameplayAttributeData& OldValue);
	
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnArcheryChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnAthleticsChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnDeceitChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnDefensibilityChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnDiscernmentChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnLightWeaponryChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnHeavyWeaponryChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnPerceptionChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnStealthChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnSurvivalChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnThieveryChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnWillChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnAttributePointsChanged;
	
};
