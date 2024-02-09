#include "vlpch.h"
#include "Volition/Core/Window.h"

#ifdef VL_PLATFORM_WINDOWS
#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Volition
{
	Scope<Window> Window::Create(const WindowProps &props)
	{
#ifdef VL_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
#else
		VL_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}

}
