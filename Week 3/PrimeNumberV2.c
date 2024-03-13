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
	int n, i;
	printf("Input i, n: ");
	scanf("%d%d", &i, &n);
	
	for(i ; i < n; i++){
		
		if(checkPrime(i) == 1){
			printf("%d ", i);
		}
				
	}
	
	return 0;
}
