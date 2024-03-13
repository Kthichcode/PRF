#include <stdio.h>

int main(){
	int n, g = 1;
	printf("Input n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		g *= i;
	}
	
	printf("%d! = %d", n, g);
	
	return 0;
}
