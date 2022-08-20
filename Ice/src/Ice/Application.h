#pragma once
#include "Core.h"
#include <stdio.h>
namespace Ice {
	class ICE_API Application
	{
	public:
		virtual ~Application();
		void Run();

	};
	//TO DO Create App Client
	Application* CreateApplication();
}


