#pragma once

#include "Core.h"

namespace testGame
{
	class TESTGAME_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
