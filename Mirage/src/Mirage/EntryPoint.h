#pragma once

#ifdef MRG_PLATFORM_WINDOWS

extern Mirage::Application* Mirage::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Mirage::CreateApplication();
	app->Run();
	delete app;
}

#endif