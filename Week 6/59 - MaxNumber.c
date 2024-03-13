#include <stdio.h>
void inputArray(int a[], int n);
int maxNumber(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	printf("Max element in array is %d", maxNumber(a, n));
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int maxNumber(int a[], int n){
	int max;
	max = a[0];
	
	for(int i = 1; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
