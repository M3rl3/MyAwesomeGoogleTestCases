#include "Count.h"

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
