#include <stdio.h>
void inputArray(int a[], int n);
void primeNumber(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	if(firstPrimeNumber(a, n) == a[0])
		printf("The first number in array is: %d", a[0]);
	else
		printf("The first prime number in array is: %d", firstPrimeNumber(a, n));
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

int firstPrimeNumber(int a[], int n){
	for(int i = 0; i < n; i++){
		if(checkPrime(a[i]) == 1)
			return a[i];
	}
	return a[0];
}
