#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL // Defines macro for Alcyone project, not Sandbox project
		#define ALCYONE_API __declspec(dllexport)
	#else
		#define ALCYONE_API __declspec(dllimport)
	#endif // DEBUG
#else
	#error Alcyone only supports Windows!
#endif // HZ_PLATFORM_WINDOWS
