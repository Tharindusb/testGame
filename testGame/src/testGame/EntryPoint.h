#pragma once


#ifdef TG_PLATFORM_WINDOWS

extern testGame::Application* testGame::CreateApplication();

int main(int argc,char** argv)
{
	
	auto app = testGame::CreateApplication();
	app->Run();
	delete app;
}

#endif // TG_PLATFORM_WINDOWS
