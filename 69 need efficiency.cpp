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
	
	for (int n = 900000; n <= 1000000; n++){
		
		int count = 0;
		
		for ( int i = 1; i <= n; i++){
			
			if ( RelativelyPrime(i,n)) count++;
			if ( (phi * count) > n) break;
		}
		p = n/(float)count;
		if (phi < p){
			max = n;
			phi = p; 
		}
		       
		if ( n%10000 == 0){
			counter++;
			std::cout<<counter<<std::endl<<max<<std::endl;
		}
	}
	
	std::cout << max;
}