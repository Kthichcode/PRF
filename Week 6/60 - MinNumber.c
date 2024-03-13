#include <stdio.h>
void inputArray(int a[], int n);
int minNumber(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	printf("Min element in array is %d", minNumber(a, n));
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int minNumber(int a[], int n){
	int min;
	min = a[0];
	
	for(int i = 1; i < n; i++){
		if(a[i] < min)
			min = a[i];
	}
	return min;
}
