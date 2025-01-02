// UhuPlayerController.h
// Copyright by MykeUhu

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UhuPlayerController.generated.h"

UCLASS()
class RACCOONDRONE_API AUhuPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
};