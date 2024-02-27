#include <stdio.h>
//16.Write a program to check whether an integer entered number by the user is odd or even.
int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(n == 0)
		printf("Even and odd");
	else
		if (n % 2 == 0)
			printf("%d is even number", n);
		else
			printf("%d is odd number", n);
	
	return 0;
}
