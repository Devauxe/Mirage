#pragma once

#include "Core.h"

namespace Mirage {

	class MIRAGE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Should be defined in CLIENT
	Application* CreateApplication();

}
