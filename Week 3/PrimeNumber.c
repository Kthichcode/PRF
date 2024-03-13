#include <stdio.h>
#include <math.h>
int main(){
	int n, f = 1;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	if (n < 2)
		printf("%d is not prime", n);
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				f = 0;
				break;
			}
					
		}
	}
	
	if (f == 1)
		printf("%d is prime", n);
	else
		printf("%d is not prime", n);
		
	return 0;
}
