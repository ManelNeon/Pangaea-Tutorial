// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Projectile.generated.h"

UCLASS(Blueprintable)
class PANGEA_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

	UPROPERTY(EditAnywhere, Category = "Projectile Params")
	float Speed = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Projectile Params")
	float LifeSpan = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Projectile Params")
	float Damage = 10.0f;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tower Component", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* _MeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float _LifeCountingDown;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
