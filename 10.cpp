/*Find the sum of all the primes below two million*/

#include <iostream>
#include <cmath>

bool isPrime(int n){
    if ( n == 1) return false;
    else if ( n < 4) return true;
    else if ( n % 2 == 0) return false;
    else if ( n < 9) return true;
    else if ( n % 3 == 0) return false;

    else {

        int great_int = floor(sqrt(n));
        int factor = 5;
        while ( factor <= great_int){
            if( n % factor == 0) return false;
            if ( n % (factor+2) == 0) return false;
            factor += 6;
        }
    }
    return true;
}
int main (){

    long long int sum = 0;
    for ( int i = 0; i < 2000000; ++i ){
        if (isPrime(i)) sum += i;
    }
    std::cout<< sum;
    return 0; 
}
