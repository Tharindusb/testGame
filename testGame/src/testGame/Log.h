#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"


namespace testGame
{
	class TESTGAME_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr < spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr < spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define TG_CORE_ERROR(...)	::testGame::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TG_CORE_WARN(...)	::testGame::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TG_CORE_INFO(...)	::testGame::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TG_CORE_TRACE(...)	::testGame::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TG_CORE_FATAL(...)	::testGame::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define TG_ERROR(...)	::testGame::Log::GetClientLogger()->error(__VA_ARGS__)
#define TG_WARN(...)	::testGame::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TG_INFO(...)	::testGame::Log::GetClientLogger()->info(__VA_ARGS__)
#define TG_TRACE(...)	::testGame::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TG_FATAL(...)	::testGame::Log::GetClientLogger()->fatal(__VA_ARGS__)