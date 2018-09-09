#include "CookedLog.h"

UCookedLog::UCookedLog(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UCookedLog::CookedLog(const FString& Text)
{
	UE_LOG(LogBlueprintUserMessages, Log, TEXT("%s"), *Text);
}

void UCookedLog::CookedWarn(const FString& Text)
{
	UE_LOG(LogBlueprintUserMessages, Warning, TEXT("%s"), *Text);
}

void UCookedLog::CookedError(const FString& Text)
{
	UE_LOG(LogBlueprintUserMessages, Error, TEXT("%s"), *Text);
}
