#pragma once

#include <memory> // To use shared pointers

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Alcyone
{
	class ALCYONE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros ------------------------------------------------------------

#define HZ_CORE_TRACE(...) ::Alcyone::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...) ::Alcyone::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...) ::Alcyone::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::Alcyone::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...) ::Alcyone::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// -----------------------------------------------------------------------------

// Client log macros ------------------------------------------------------------

#define HZ_TRACE(...) ::Alcyone::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...) ::Alcyone::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...) ::Alcyone::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...) ::Alcyone::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...) ::Alcyone::Log::GetClientLogger()->fatal(__VA_ARGS__)

// -----------------------------------------------------------------------------