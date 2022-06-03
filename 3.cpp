/*What is the largest prime factor of the number 600851475143 ? */

# include <iostream> 
# include <math.h> 
     
// A function to print all prime factors of a given number n 
void primeFactors(long long int n) 
{ 
    while (n%2 == 0) 
    { 
        std::cout << 2; 
        n = n/2; 
    } // makes n odd , & prints 2 
      
    for (int i = 3; i <= sqrt(n); i = i+2) 
    {  
        while (n%i == 0) 
        { 
            std::cout << i; 
            n = n/i; 
        } // divide n till it becomes a prime or unit
    } 
     
    if (n > 2) 
        std::cout<<n;  // prints the last prime factor
} 
     
int main() 
{ 
    long long int n = 600851475143; 
    primeFactors(n); 
    return 0; 
}