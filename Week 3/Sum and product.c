#include <stdio.h>

int main(){
	int n, p = 1, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		p*=i;
		sum += p;
	}
	
	printf("Sum is: %d", sum);
	return 0;
}
