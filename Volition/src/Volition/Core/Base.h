#pragma once

#include "Volition/Core/PlatformDetection.h"

#include <memory>

#ifdef VL_DEBUG
#if defined(VL_PLATFORM_WINDOWS)
#define VL_DEBUGBREAK() __debugbreak()
#elif defined(VL_PLATFORM_LINUX)
#include <signal.h>
#define VL_DEBUGBREAK() raise(SIGTRAP)
#else
#error "Platform doesn't support debugbreak yet!"
#endif
#define VL_ENABLE_ASSERTS
#else
#define VL_DEBUGBREAK()
#endif

#define VL_EXPAND_MACRO(x) x
#define VL_STRINGIFY_MACRO(x) #x

#define BIT(x) (1 << x)

#define VL_BIND_EVENT_FN(fn) [this](auto &&...args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }

namespace Volition
{

	template <typename T>
	using Scope = std::unique_ptr<T>;
	template <typename T, typename... Args>
	constexpr Scope<T> CreateScope(Args &&...args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template <typename T>
	using Ref = std::shared_ptr<T>;
	template <typename T, typename... Args>
	constexpr Ref<T> CreateRef(Args &&...args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}

}

#include "Volition/Core/Log.h"
#include "Volition/Core/Assert.h"
