#pragma once

#ifdef BLACKBOXTESTCASES_EXPORTS
#define BLACKBOX_API __declspec(dllexport)
#else
#define BLACKBOX_API __declspec(dllimport)
#endif // DEBUG

extern "C" {
	BLACKBOX_API int Invert(int);
}