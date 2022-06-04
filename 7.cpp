/* What is the 10 001st prime number? */

#include <iostream>

int main (){
     int count = 1;
     for(int num = 3; ; num += 2){
          for( int i =3; i <= num; ++i ){
               if( i == num){
                    ++count;
                    break; 
               }
               if ( num % i == 0) break;
          }

          if ( count >= 10001){
               std::cout<< num;
               return 0;
          }
     }
}