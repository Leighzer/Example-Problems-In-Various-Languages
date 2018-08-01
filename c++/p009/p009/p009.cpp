#include <iostream>
#include <math.h>

int main(int argc, char** argv) {

	//Generate Pythagorean Triplets where sum is less than 1000

	//Check if that triplet summed together is 1000
	//if it is find the product of that triplet
	//else keep searching

	std::cout.precision(20);//So numbers that get printed are printed in full rather than in scientific format

	int target = 1000;
	int count = 0;

	for (int a = 1; a < target; a++) {

		for (int b = a; b < target - a; b++) {
			double c = sqrt(pow(a, 2) + pow(b, 2));
			if (a + b + c > target) {
				break;
			}
			if (std::fmod(c,1.0) == 0 && a + b + c == target) {
				std::cout << a << "*" << b << "*" << c << " = " << a*b*c << std::endl;
			}
			++count;		
		}


	}

	std::cout << count << std::endl;

	std::cin.get();
}