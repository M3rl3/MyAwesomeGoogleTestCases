#pragma once

#ifdef BLACKBOXTESTCASES_EXPORTS
#define BLACKBOX_API __declspec(dllexport)
#else
#define BLACKBOX_API __declspec(dllimport)
#endif // DEBUG

extern "C" {
	BLACKBOX_API int Fibonacci(int); //Finds the fibonacci series equivalent of that number.
	BLACKBOX_API int Invert(int); //Inverts the sign on the passed number.
	BLACKBOX_API double CubeRoot(double); //Finds cube root of the passed number.
	BLACKBOX_API int Square(int);
	BLACKBOX_API double SquareRoot(double); //Finds square root of passed number.
}