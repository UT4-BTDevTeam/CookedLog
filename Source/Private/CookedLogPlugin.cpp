
#include "ModuleManager.h"
#include "ModuleInterface.h"

class FCookedLogPlugin : public IModuleInterface
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FCookedLogPlugin, CookedLog )

//================================================
// Startup
//================================================

void FCookedLogPlugin::StartupModule()
{
	UE_LOG(LogLoad, Log, TEXT("[CookedLog] StartupModule"));
}

//================================================
// Shutdown
//================================================

void FCookedLogPlugin::ShutdownModule()
{
	UE_LOG(LogLoad, Log, TEXT("[CookedLog] ShutdownModule"));
}
