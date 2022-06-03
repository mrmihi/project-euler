/*Find the largest palindrome made from the product of two 3-digit numbers.*/

/* Going from the largest palindrome to the smallest palindrom which is xxx * xxx */

#include <iostream>
#include <cmath>

int main (){
    
    int i = 997799;
    int shift;
    int normal;
    int defa;
    float max2;
    float n;
    while( i > 100000){
        if ( i >= 100000){
             normal = 1100;
             shift = 110;
             defa = 11;

            if ( (((i / 1000)/10)%10 == 0) && ((i / 1000)%10 == 0) ){
                i -= defa;
            }
            else if ((i / 1000)%10 == 0)
                i -= shift;
            else
                i -= normal;
        }
        else if ( i >= 10000){
             normal = 100;
             shift = 110;

            if ( (((i / 100)/10)%10 == 0) && ((i / 100)%10 == 0) ){
                i -= defa;
            }
            else if ((i / 100)%10 == 0)
                i -= shift;
            else
                i -= normal;
        }
        // std::cout << i << std::endl;
        // n = sqrt(i);
        for ( float max = 100; max < 1000; ++max){
            max2 = (float)i / max;
            if ( ((max2 - int(max2)) == 0) && (max2 > 100) && (max2 < 1000) ){
                std::cout << i << std::endl;
                return 0;
            }
            
        
        }
    }
}