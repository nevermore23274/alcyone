#include "Log.h"

namespace Alycone
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger; // Shared pointer
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger; // Shared pointer

	void Log::Init()
	{

	}

}