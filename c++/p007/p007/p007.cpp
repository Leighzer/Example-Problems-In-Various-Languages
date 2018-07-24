#include <iostream>

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

	int targetIndex = 10001;

	bool unsolved = true;
	int primeIndex = 0;
	long long numberWeAreTesting = 2;
	while (unsolved) {

		numberWeAreTesting += 1;

		if (isPrime(numberWeAreTesting)) {
			primeIndex += 1;		

		}

		if (primeIndex == targetIndex) {
			std::cout << "The " << targetIndex << "th prime number is: " << numberWeAreTesting << std::endl;
			break;
		}

	}

	std::cout << "Press enter to exit";
	std::cin.get();

	return 0;

}

