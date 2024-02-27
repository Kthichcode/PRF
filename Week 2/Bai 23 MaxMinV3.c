#include <stdio.h>

int main(){
	int a, b, max;
	printf("Input a, b: ", a, b);
	scanf("%d%d", &a, &b);
	
	max = (a > b) ? a : b;
	
	printf("Max is: %d", max);
}
