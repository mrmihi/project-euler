#include <iostream>

int main (){
    int sum = 0;
    for (int i = 1; i < 1000; i++){
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

    std::cout << sum;
}