#pragma once

#ifdef _WIN32
	#define DLLEXPORT __declspec(dllexport)
#elif defined(__GNUC__)
	#define DLLEXPORT __attribute__((visibility("default")))
#else
	#error "TODO other platforms"
#endif