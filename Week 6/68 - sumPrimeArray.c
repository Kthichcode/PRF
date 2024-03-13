#include <stdio.h>
#include <math.h>
void inputArray(int a[], int n);
int checkPrime(int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	printf("Sum is: %d", sumPrime(a, n));
	
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

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


int sumPrime(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(checkPrime(a[i]) == 1)
			sum += a[i];
	}
	return sum;
}
