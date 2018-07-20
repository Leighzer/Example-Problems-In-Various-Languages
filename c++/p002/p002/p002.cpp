#include<stdio.h>
#include <iostream>

int nextFibonnaci(int x, int y) {

	return x + y;

}

int main() {

	int x = 1;
	int y = 2;

	int sum = 0;

	int valueLimit = 4000000;

	while (x < valueLimit && y < valueLimit) {

		if (y % 2 == 0) {
			sum += y;
		}

		int nextFib = nextFibonnaci(x, y);

		x = y;

		y = nextFib;

	}

	std::cout << "The sum of the even valued fibonacci sequence values below 4 million is: " << sum << std::endl;

	std::cin.get();

	return 0;

}

