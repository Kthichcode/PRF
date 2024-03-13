#include <stdio.h>
void inputArray(int a[], int n);
int sumArray(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	printf("Sum is: %d", sumArray(a, n));
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int sumArray(int a[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
	return sum;
}
