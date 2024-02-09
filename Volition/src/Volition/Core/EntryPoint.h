#pragma once
#include "Volition/Core/Base.h"
#include "Volition/Core/Application.h"

#ifdef VL_PLATFORM_WINDOWS

extern Volition::Application *Volition::CreateApplication(ApplicationCommandLineArgs args);

int main(int argc, char **argv)
{
	Volition::Log::Init();

	VL_PROFILE_BEGIN_SESSION("Startup", "VolitionProfile-Startup.json");
	auto app = Volition::CreateApplication({argc, argv});
	VL_PROFILE_END_SESSION();

	VL_PROFILE_BEGIN_SESSION("Runtime", "VolitionProfile-Runtime.json");
	app->Run();
	VL_PROFILE_END_SESSION();

	VL_PROFILE_BEGIN_SESSION("Shutdown", "VolitionProfile-Shutdown.json");
	delete app;
	VL_PROFILE_END_SESSION();
}

#endif
