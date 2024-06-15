#include <NE.h>

class Sandbox : public NE::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

NE::Application* NE::CreateApplication()
{
	return new Sandbox();
}