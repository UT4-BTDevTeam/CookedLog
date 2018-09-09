#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "CookedLog.generated.h"

UCLASS()
class UCookedLog : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Meta = (CallableWithoutWorldContext, Keywords = "log"), Category = "CookedLog")
	static void CookedLog(const FString& Text = FString(TEXT("Hello")));

	UFUNCTION(BlueprintCallable, Meta = (CallableWithoutWorldContext, Keywords = "log warning"), Category = "CookedLog")
	static void CookedWarn(const FString& Text = FString(TEXT("Careful")));

	UFUNCTION(BlueprintCallable, Meta = (CallableWithoutWorldContext, Keywords = "log error"), Category = "CookedLog")
	static void CookedError(const FString& Text = FString(TEXT("Argh!")));

	UFUNCTION(BlueprintPure, Meta = (CallableWithoutWorldContext, Keywords = "log plugin detect"), Category = "CookedLog")
	static bool CookedLogPluginDetection() { return true; };
};