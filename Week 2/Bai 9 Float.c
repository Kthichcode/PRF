#include <stdio.h>

int main(){
	float a, b, q;
	printf("Input a, b: ");
	scanf("%f%f", &a, &b);
	q = a / b;
	printf("Quotient is: %.2f", q);
	
	return 0;
}

