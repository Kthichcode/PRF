#include <stdio.h>

int main(){
	int n, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= (2*n + 1); i += 2){
		sum += i;
	}
	
	printf("%d", sum);
	
	return 0;
}
