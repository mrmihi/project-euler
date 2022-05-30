int square (int n){
	return n*n;
}
int main (){
	
	int sum0 =0 ,sum1 = 0,sum2 = 0;
	for ( int i =1; i <= 100; i++){
		sum1 += square(i);
		sum0 += i;
	}
	sum2 = square(sum0);
	return sum2 - sum1;
}