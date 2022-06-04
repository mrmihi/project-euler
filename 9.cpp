/*There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc*/

#include <iostream>
#include <cmath>
int main (){

    int a, b;
    float c;
    for (a = 3; a < 1000; ++a){
        for (b = 4; b < 1000; ++b){
            c = sqrt(a*a + b*b);
            if ( c -(int)c != 0.0)continue;
            if (a + b + (int)c == 1000){
                std::cout << a*b*(int)c;
                return 0;
            }
        }
    }      
}