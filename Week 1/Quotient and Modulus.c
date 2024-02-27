#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b, q, m;
	
	printf("Input a, b: ");
	scanf("%d%d", &a, &b);
	q = a / b;
	m = a % b;
	
	printf("Quotient is: %d, Modulus is: %d", q, m);
	
	return 0;
}
