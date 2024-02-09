#pragma once

#include "Volition/Core/Base.h"

#define GLM_ENABLE_EXPERIMENTAL
#include "glm/gtx/string_cast.hpp"

// This ignores all warnings raised inside External headers
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#pragma warning(pop)

namespace Volition
{

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

template <typename OStream, glm::length_t L, typename T, glm::qualifier Q>
inline OStream &operator<<(OStream &os, const glm::vec<L, T, Q> &vector)
{
	return os << glm::to_string(vector);
}

template <typename OStream, glm::length_t C, glm::length_t R, typename T, glm::qualifier Q>
inline OStream &operator<<(OStream &os, const glm::mat<C, R, T, Q> &matrix)
{
	return os << glm::to_string(matrix);
}

template <typename OStream, typename T, glm::qualifier Q>
inline OStream &operator<<(OStream &os, glm::qua<T, Q> quaternion)
{
	return os << glm::to_string(quaternion);
}

// Core log macros
#define VL_CORE_TRACE(...) ::Volition::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VL_CORE_INFO(...) ::Volition::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VL_CORE_WARN(...) ::Volition::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VL_CORE_ERROR(...) ::Volition::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VL_CORE_CRITICAL(...) ::Volition::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define VL_TRACE(...) ::Volition::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VL_INFO(...) ::Volition::Log::GetClientLogger()->info(__VA_ARGS__)
#define VL_WARN(...) ::Volition::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VL_ERROR(...) ::Volition::Log::GetClientLogger()->error(__VA_ARGS__)
#define VL_CRITICAL(...) ::Volition::Log::GetClientLogger()->critical(__VA_ARGS__)
