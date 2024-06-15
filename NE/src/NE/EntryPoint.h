#pragma once

#ifdef NE_PLATFORM_WINDOWS

extern NE::Application* NE::CreateApplication();

int main(int argc, char** argv)
{
	auto app = NE::CreateApplication();
	app->Run();
	delete app;
}

#endif