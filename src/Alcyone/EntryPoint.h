#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Alcyone::Application* Alcyone::CreateApplication();

int main(int argc, char** argv)
{
	Alcyone::Log::Init();
	HZ_CORE_WARN("Initialized log...");
	int a = 5;
	HZ_INFO("Hello! Var = {0}", a);


	auto app = Alcyone::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
