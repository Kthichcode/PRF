#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int d1, d2, sum = 0;
	
	if (n >= 10 && n <= 99){
		d2 = n % 10;
		d1 = n / 10;
		sum = d1 + d2;
		printf("Sum of two digit(%d) is %d", n, sum);
	}else 
		printf("Please input a positive integer N with 2 digits");
	
	return 0;
	
}
