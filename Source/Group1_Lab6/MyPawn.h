// Fill out your copyright notice in the Description page of Project Settings. GROUP1_LAB6_API

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class GROUP1_LAB6_API AMyPawn : public APawn
{
    GENERATED_BODY()

public:
    AMyPawn();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void MoveForward(float Value);
    void MoveRight(float Value);

private:
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* MeshComponent;

    UPROPERTY(VisibleAnywhere)
    class UFloatingPawnMovement* MovementComponent;
};
