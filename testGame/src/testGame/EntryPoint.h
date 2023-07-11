#pragma once


#ifdef TG_PLATFORM_WINDOWS

extern testGame::Application* testGame::CreateApplication();

int main(int argc,char** argv)
{
	testGame::Log::Init();
	TG_CORE_WARN("Initialized Log!");
	int a = 8;
	TG_INFO("Hello! Var={0}",a);
	auto app = testGame::CreateApplication();
	app->Run();
	delete app;
}

#endif // TG_PLATFORM_WINDOWS
