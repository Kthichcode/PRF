#include <stdio.h>
void inputArray(int a[], int n);
void printArray(int a[], int n);
void evenNumber(int a[], int n);
void oddNumber(int a[], int n);
void primeNumber(int a[], int n);
void perfectNumber(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	
	inputArray(a, n);
	printf("\n---------\n");
	printArray(a, n);
	printf("\n---------\n");
	evenNumber(a, n);
	printf("\n---------\n");
	oddNumber(a, n);
	printf("\n---------\n");
	primeNumber(a, n);
	printf("\n---------\n");
	perfectNumber(a, n);
	
}










void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void printArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("a[%d]: %d\n", i, a[i]);
		
	}
}

void evenNumber(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
			printf("%d ", a[i]);
	}
}

void oddNumber(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0)
			printf("%d ", a[i]);
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

void primeNumber(int a[], int n){
	for(int i = 0; i < n; i++){
		if(checkPrime(a[i]) == 1)
			printf("%d ", a[i]);
	}
}

int checkPerfect(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}

void perfectNumber(int a[], int n){
	for(int i = 0; i < n; i++){
		if(checkPerfect(a[i]) == 1)
			printf("%d ", a[i]);
	}
}
