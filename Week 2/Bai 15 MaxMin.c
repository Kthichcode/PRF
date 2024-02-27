#include <stdio.h>
//15.Write a program to enter two integers a and b. Print the maximum value to the screen.
int main(){
	int a, b;
	printf("Input a, b: ");
	scanf("%d%d", &a, &b);
	int max;
	if (a > b)
		max = a;
	else 
		max = b;
	
	printf("Max: %d", max);
	
	return 0;
	
}
