#pragma once

#ifdef ICE_PLATFORM_WINDOWS
	#ifdef ICE_BUILD_DLL
		#define ICE_API _declspec(dllexport) 
	#else 
		#define ICE_API _declspec(dllimport)
	#endif
#else
	#error ICE only support Windows.
#endif
