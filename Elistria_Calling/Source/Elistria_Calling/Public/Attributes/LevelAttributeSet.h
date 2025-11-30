// Source/Elistria_Calling/Public/Attributes/LevelAttributeSet.h
#pragma once

#include "CoreMinimal.h"
#include "ElistriaAttributeSetBase.h"
#include "ElistriaAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffectExtension.h"
#include "LevelAttributeSet.generated.h"

UCLASS(BlueprintType)
class ELISTRIA_CALLING_API ULevelAttributeSet : public UElistriaAttributeSetBase
{
	GENERATED_BODY()

public:
	ULevelAttributeSet();

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Broadcast attribute changes centrally
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Level)
	FGameplayAttributeData Level;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_XP)
	FGameplayAttributeData XP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_XPToNextLevel)
	FGameplayAttributeData XPToNextLevel;

	UPROPERTY(VisibleAnywhere)
	FGameplayAttributeData MaxLevel;

	ATTRIBUTE_ACCESSORS(ULevelAttributeSet, Level)
	ATTRIBUTE_ACCESSORS(ULevelAttributeSet, XP)
	ATTRIBUTE_ACCESSORS(ULevelAttributeSet, XPToNextLevel)
	ATTRIBUTE_ACCESSORS(ULevelAttributeSet, MaxLevel)

	UFUNCTION(BlueprintCallable, Category="Attributes|Level")
	void SetXPBase(float NewXP);
	
	UFUNCTION(BlueprintCallable, Category="Attributes|Level")
	void SetLevelBase(float NewLevel);
	
	UFUNCTION(BlueprintCallable, Category="Attributes|Level")
	void SetXPToNextLevelBase(float NewXPToNextLevel);
	
	UFUNCTION()
	void OnRep_Level(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_XP(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_XPToNextLevel(const FGameplayAttributeData& OldValue);

	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnLevelChanged;

	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnXPChanged;

	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnXPToNextLevelChanged;

protected:
	float ComputeXPForLevel(int32 InLevel) const;
	void HandleLevelUp(int32 LevelsGained);
};
