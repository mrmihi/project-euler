//Find the sum of all the multiples of 3 or 5 below 1000

#include <iostream>
#include <cmath>

long long int first_answer(long long int value){     // first answer , O(n) time
		
	long long int sum = 0;
    for (long long int i = 1; i < value; i++){
        if (i%3 == 0){
            sum += i; 
            continue;
        }
        if (i%5 == 0)
        {
            sum += i;
            continue;
        }   
    }
    return sum;
}

long long int sumDivisableBy(long long int value, float n){
	
	long int p = floor(value/n);
	return floor(n*(p*(p+1))/2);
}

long long int second_answer(long long int value){ //constant time answer
		
	// 3+6+9+...+999 = 3*(1+2+3+...+333)
	// 5+10+15+...+995 = 5*(1+2+3+...+199)
	// = n*(p/2*(p+1)) using arithmetic sequence sum formula
	return sumDivisableBy(value,5) + sumDivisableBy(value,3) - sumDivisableBy(value,15);
}

int main (){
    
	std::cout<< first_answer(100000-1) << std::endl;
	std::cout<< second_answer(100000-1) << std::endl;
    
    
    
}