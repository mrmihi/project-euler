/*By considering the terms in the Fibonacci sequence whose values do not exceed four million,
 find the sum of the even-valued terms.*/

#include <iostream>

int main (){
	
	int i = 1;
	int j = 2;
	int k;
	int sum;
	for ( ; j < 4000000; ){
		std::cout << i <<' '<< j << std::endl;
		if ( j%2 == 0)sum += j;
		k = j;
		j = i + k;
		i = k;
	}
	std::cout << sum;
}