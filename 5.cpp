#include <iostream>

int main (){

   int number = 2520 * 11 * 13 * 17 * 19;

	while (true) {
		for (int i = 2; i <= 20; i++) {
			if (number % i != 0) {
				break;
			}
			else if (i == 20 && number % i == 0) {
				std::cout << number << std::endl;
				return 0;
			}
		}
		number++;
	}

	return 0;
}
