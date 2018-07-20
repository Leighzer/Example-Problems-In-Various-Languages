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

	std::cout << sumx << "\n";

	i = 1;
	while ((y*i) < 1000) {
		sumy = sumy + y*i;
		i++;
	}

	std::cout << sumy << "\n";

	i = 1;
	while ((z*i) < 1000) {
		sumz = sumz + z*i;
		i++;
	}

	std::cout << sumz << "\n";

	totalSum = sumx + sumy - sumz;

	std::cout << totalSum;

	std::cin.get();

	return 0;

}