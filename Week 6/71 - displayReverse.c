#include <stdio.h>

void inputArray(int a[], int n);
void displayReverse(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	
	inputArray(a, n);
	displayReverse(a, n);
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void displayReverse(int a[], int n){
	
	for(int i = n - 1; i >= 0; i--){
		printf("%d ", a[i]);
	}
}
