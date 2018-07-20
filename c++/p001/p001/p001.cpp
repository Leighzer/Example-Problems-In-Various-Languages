#include<stdio.h>
#include <iostream>

int main() {

	int x = 3;
	int y = 5;

	int z = x*y;

	int sumx = 0;
	int sumy = 0;
	int sumz = 0;

	int totalSum = 0;

	int i = 1;
	while ((x*i) < 1000) {
		sumx = sumx + x*i;
		i++;
	}


	i = 1;
	while ((y*i) < 1000) {
		sumy = sumy + y*i;
		i++;
	}


	i = 1;
	while ((z*i) < 1000) {
		sumz = sumz + z*i;
		i++;
	}


	totalSum = sumx + sumy - sumz;

	std::cout << "The sum of the multiples of 3 or 5 below 1000 are: " << totalSum << std::endl;

	std::cout << "Press Enter to exit the program.";

	std::cin.get();

	return 0;

}