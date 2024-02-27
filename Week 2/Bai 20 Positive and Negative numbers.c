#include <stdio.h>

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(n == 0)
		printf("%d is no positive and negative", n);
	else if(n > 0)
		printf("%d is positive number", n);
	else
		printf("%d is negative number", n);
	
	return 0;
		
}
