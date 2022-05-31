/*Find the value of n ≤ 1,000,000 for which n/φ(n) is a maximum.*/

/* 
This code is 0(n^2), it takes several hours to go to 1,000,000
So, I ran the program for smaller values (10,100,1000,...)
and discovered that the n, which has max n/φ(n) for numbers below a power(i) of ten is,
 = (i+3) prime number * n(max n/φ(n)) below (i-1)power of ten
 n(max n/φ(n)) below 100,000 is 30030, the (i+3) prime number is 17
30030*17 = 510,510 
*/

#include <iostream> 

unsigned int gcd(unsigned int u, unsigned int v) {
  int shift;
  if (u == 0)
    return v;
  if (v == 0)
    return u;
  shift = __builtin_ctz(u | v);
  u >>= __builtin_ctz(u);
  do {
    unsigned m;
    v >>= __builtin_ctz(v);
    v -= u;
    m = (int)v >> 31;
    u += v & m;
    v = (v + m) ^ m;
  } while (v != 0);
  return u << shift;
} // Daniel Lemire fast gcd

bool RelativelyPrime (int a, int b) { // Assumes a, b > 0
   return (a<b) ? RelativelyPrime(b,a) : !(a%b) ? (b==1) : RelativelyPrime (b, a%b);
}

int main (){
	
	int max = 0;
	float phi = 0;
	float p = 0;
	int counter = 0;
	
	for (int n = 0; n <= 100000; n++){
		
		int count = 0;
		
		for ( int i = 1; i <= n; i++){
			
			if ( RelativelyPrime(i,n)) count++;
		}
		std::cout<<n<<" : "<<count<<std::endl;
		p = n/(float)count;
		if (phi < p){
			max = n;
			phi = p;
			std::cout<<phi<<std::endl; 
		}
		    
	}
	
	std::cout << max;
}