#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Alcyone::Application* Alcyone::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Alcyone::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
