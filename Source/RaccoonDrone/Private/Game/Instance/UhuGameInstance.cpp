// Copyright by MykeUhu
// UhuGameInstance.cpp

#include "Game/Instance/UhuGameInstance.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils.h"
#include "Game/Log/UhuLog.h"
#include "Interfaces/OnlineIdentityInterface.h"

void UUhuGameInstance::LoginWithEOS(FString ID, FString Token, FString LoginType)
{
	IOnlineSubsystem* SubSystemRef = Online::GetSubsystem(this->GetWorld());
	if (SubSystemRef)
	{
		IOnlineIdentityPtr IdentityPtrRef = SubSystemRef->GetIdentityInterface();
		if (IdentityPtrRef)
		{
			FOnlineAccountCredentials AccountDetails;
			AccountDetails.Id = ID;
			AccountDetails.Token = Token;
			AccountDetails.Type = LoginType;

			IdentityPtrRef->OnLoginCompleteDelegates->AddUObject(this, &UUhuGameInstance::OnLoginComplete);
			IdentityPtrRef->Login(0, AccountDetails);
		}
		else
		{
			UHU_LOG(Error, TEXT("Identity Interface nicht verfügbar"));
		}
	}
	else
	{
		UHU_LOG(Error, TEXT("Online Subsystem EOS nicht verfügbar"));
	}
}

void UUhuGameInstance::OnLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error)
{
	if (bWasSuccessful)
	{
		UHU_LOG(Log, TEXT("Login erfolgreich"));
	}
	else
	{
		UHU_LOG(Error, TEXT("Login fehlgeschlagen: %s"), *Error);
	}
}

