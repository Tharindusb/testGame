#pragma once

#ifdef TG_PLATFORM_WINDOWS
	#ifdef TG_BUILD_DLL
		#define TESTGAME_API __declspec(dllexport)
	#else
		#define TESTGAME_API __declspec(dllimport)
	#endif // TG_BUILD_DLL
#else
	#error testGame only supports Windows!
#endif // TG_PLATFORM_WINDOWS

