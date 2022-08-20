#pragma once

#ifdef ICE_PLATFORM_WINDOWS
extern Ice::Application* Ice::CreateApplication();

int main(int argc, char** argv) 
{
	auto App = Ice::CreateApplication();
	App->Run();
	delete  App;
}
#endif