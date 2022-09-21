#include "TestFunctions.h"

//Returns number of digits in the passed number
int Count(int num) {
	int index = 0;
	
	if (num == 0) return 1;
	else {
		while (num != 0) {
			num /= 10;
			index++;
		}
		//std::cout << index;
		return index;
	}
}

//Returns the size of the passed literal in bytes.
int Sizeof(int num) {
	int temp = sizeof(num);
	return temp;
}int Sizeof(float num) {
	int temp = sizeof(num);
	return temp;
}int Sizeof(double num) {
	int temp = sizeof(num);
	return temp;
}int Sizeof(char num) {
	int temp = sizeof(num);
	return temp;
}

//Finds factorial of the passed number.
int Fact(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;
}

//Halves the number.
double Half(int num) {
	return ((double)(num / 2));
}

//Cubes the number.
int Cube(int num) {
	return (num * num * num);
}
