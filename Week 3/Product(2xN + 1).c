#include <stdio.h>

int main(){
	int n, p = 1;
	printf("Input n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= (2*n + 1); i += 2){
		p *= i;
	}
	
	printf("%d", p);
	
	return 0;
}
