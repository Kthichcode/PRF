#include <stdio.h>
#include <math.h>
void inputArray(int a[], int n);
int checkPrime(int n);
int lastPrime(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	
	if(lastPrime(a, n) == a[n - 1])
		printf("The last number in array: %d", a[n - 1]);
	else
		printf("The last prime number in array: %d", lastPrime(a, n));
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

int lastPrime(int a[], int n){
	int last = 0;
	
	for(int i = n - 1; i >= 0; i--){
		if(checkPrime(a[i]) == 1){
			last = a[i];
			return last;
		}
	}
	
	return a[n-1];
}
