#include <stdio.h>
void inputArray(int a[], int n);
int lastOddNumber(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	int lastOdd = lastOddNumber(a, n);
	if(lastOddNumber(a, n) % 2 == 0)
		printf("The last number in array is: %d", a[n - 1]);
	else
		printf("The last odd number in array is: %d", lastOddNumber(a, n));
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int lastOddNumber(int a[], int n){
	
	int lastOddNumber = a[n - 1];
	
	for(int i = n - 1; i >= 0; i--){
		if(a[i] % 2 != 0){
			lastOddNumber = a[i];
			break;
		}		
	}
	return lastOddNumber;
	
}
