#include <stdio.h>
#include <math.h>
int checkPrime(int n){
	if (n < 2)
		return 0;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0)
				return 0;		
		}	
	}
	return 1;		
}
int main(){
	int n, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	for(int i = 2; i < n; i++){
		if(checkPrime(i) == 1){
			sum += i;
		}			
	}
	
	printf("Sum is: %d ", sum);

	return 0;
}
