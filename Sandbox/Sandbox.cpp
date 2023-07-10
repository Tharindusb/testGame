#include <testGame.h>

class Sandbox : public testGame::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

testGame::Application* testGame::CreateApplication()
{
	return new Sandbox();
}