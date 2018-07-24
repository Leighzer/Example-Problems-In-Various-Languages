#include<stdio.h>
#include <iostream>

int main() {

	int a = 3;
	int b = 5;

	int result = 0;
	for (int i = 1; i < 1000; i++) {
		if (i % a == 0 || i % b == 0) {
			result += i;
		}

	}
	

	std::cout << "The sum of the multiples of 3 or 5 below 1000 are: " << result << std::endl;

	std::cout << "Press Enter to exit the program.";

	std::cin.get();

	return 0;

}