#include "pch.h"
#include "BlackBoxTest.h"
#include <cmath>

//Finds the fibonacci series equivalent of that number.
int Fibonacci(int num) {
	if (num <= 0) return -1;

	if (num == 1 || num == 2) return 1;
	
	return Fibonacci(num - 1) + Fibonacci(num - 2);
}

//Inverts the sign on the passed number.
int Invert(int num) {
	return (num *= -1);
}

//Finds square root of passed number.
double SquareRoot(double num) {
	return sqrt(num);
}

//Squares the number.
int Square(int num) {
	return num * num;
}

//Finds cube root of the passed number.
double CubeRoot(double num) {
	return cbrt(num);
}