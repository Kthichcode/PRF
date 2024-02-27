#include <stdio.h>

int main(){
	int a, b, c;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);
	printf("Input c: ");
	scanf("%d", &c);
	
	int max = a;
	if(max < b)
		max = b;
	
	if(max < c)
		max = c;
	
	int min = a;
	
	if(min > b)
		min = b;
	
	if(min > c)
		min = c;
		
	
	printf("The largest numbers is %d, min is %d", max, min); 
		
	return 0;
}
