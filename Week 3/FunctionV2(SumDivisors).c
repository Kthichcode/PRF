#include <stdio.h>
void sumDivisors(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0)
			sum += i;		
	}
	printf("%d", sum);		
}

int main(){
	int n, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	sumDivisors(n);

	return 0;
}
