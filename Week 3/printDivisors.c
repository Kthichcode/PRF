#include <stdio.h>
void printDivisors(int n){
	int sum;
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			printf("%d ", i);		
	}
			
}

int main(){
	int n, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	printDivisors(n);

	return 0;
}
