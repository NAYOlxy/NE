#pragma once

#ifdef NE_PLATFORM_WINDOWS

extern NE::Application* NE::CreateApplication();

int main(int argc, char** argv)
{
	NE::Log::Init();
	NE_CORE_WARN("Initialized Log!");
	int a = 5;
	NE_INFO("Hello! Var = {0}",a);

	auto app = NE::CreateApplication();
	app->Run();
	delete app;
}

#endif