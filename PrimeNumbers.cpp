#include <iostream>
#include <vector>
#include <algorithm>  


std::vector<int> populateVector(int n) {
	std::vector <int> v = {};
	for (int x = 2; x < n + 1; x++) {
		v.insert(v.end(), x);
	}

	return v;
}

void checkPrime(int x) {
	int count = 0;
	for (int i = 2; i < x+1; i++) {
		if (x%i == 0) {
			count++;
		}
	}

	if (count > 1) {
		//then it is not prime so we don't print it
	}
	else {

		std::cout << x << " ";
	}

}



int main() {


	std::cout << "Welcome to prime number generator!\n\n" << std::endl;

	//get the input
	int input=0;
	while (input < 2) {
		std::cout << "Enter value (greater than 1): " << std::endl;
		std::cin >> input;
	}
	



	//populate vector
	std::vector<int> v1 = populateVector(input);

	//print the primes
	std::cout << "The prime numbers are:" << std::endl;
	for_each(v1.begin(), v1.end(),checkPrime);

	std::cout << "\nProgram Ended\n-------------------------------------------------------------------------------------------------" << std::endl;
	getchar();
	getchar();
}