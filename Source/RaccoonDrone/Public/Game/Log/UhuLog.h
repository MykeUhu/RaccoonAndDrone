// Copyright by MykeUhu

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogUhu, Log, All);

#define UHU_LOG(Verbosity, Format, ...) \
UE_LOG(LogUhu, Verbosity, TEXT("%s: ") Format, *FString(__FUNCTION__), ##__VA_ARGS__)

