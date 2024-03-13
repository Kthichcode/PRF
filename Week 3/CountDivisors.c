#include <stdio.h>

int main(){
	int n, count = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			count++;
	}
	
	printf("The number of divisors is: %d ", count);
	return 0;
}
