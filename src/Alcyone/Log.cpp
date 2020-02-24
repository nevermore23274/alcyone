#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Alcyone
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger; // Shared pointer
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger; // Shared pointer

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$"); // Timestamp, Name of logger, Message
		s_CoreLogger = spdlog::stdout_color_mt("ALCYONE");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);

	}

}