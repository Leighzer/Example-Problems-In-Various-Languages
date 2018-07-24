#include<stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

void log(std::string message) {
	std::cout << message << std::endl;
}


//This method utilizes the algorithm and code structure user Alexandru gave in python on stack overflow https://stackoverflow.com/questions/1801391/what-is-the-best-algorithm-for-checking-if-a-number-is-prime
//This algorithm takes advantage of the fact that prime numbers greater than 3 take the form of 6k - 1 or 6k + 1
bool isPrime(long long number) {

	if (number == 2) {
		return true;
	}
	if (number == 3) {
		return true;
	}
	if (number % 2 == 0) {
		return false;
	}
	if (number % 3 == 0) {
		return false;
	}

	long long i = 5;
	long long w = 2;

	while (i*i <= number) {

		if (number % i == 0) {
			return false;
		}

		i += w;
		w = 6 - w;

	}

	return true;


}

int main(int argc, char** argv) {

	
	long long target = 600851475143;

	long long searchMax = (long long)ceil(sqrt(target));

	long long answer = 1;

	for (long long searchMin = 1; searchMin <= searchMax; searchMin++) {

		if (target % searchMin == 0) {
			long long otherFactor = target / searchMin;

			if (isPrime(otherFactor) && otherFactor > answer) {
				answer = otherFactor;
			}

			if (isPrime(searchMin) && searchMin > answer) {
				answer = searchMin;
			}

		}

	}

	std::cout << "The largest prime factor of: " << target << " is " << answer << std::endl;

	log("Press enter to exit.");

	std::cin.get();

	

	return 0;

}

