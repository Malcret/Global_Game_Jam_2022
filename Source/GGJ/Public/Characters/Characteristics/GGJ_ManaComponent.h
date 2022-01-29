// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GGJ_ManaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGJ_API UGGJ_ManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGGJ_ManaComponent();

	UFUNCTION(BlueprintCallable)
	void Modification(const float Modificator);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mana")
	float DefaultMana;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mana")
	float DefaultManaRegenRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mana")
	float CurrentMana;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mana")
	float CurrentManaRegenRate;

	// Called when the game starts
	virtual void BeginPlay() override;

public:	

};
