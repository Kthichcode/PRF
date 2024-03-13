#include <stdio.h>
void inputArray(int a[], int n);
int countEven(int a[], int n);
int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	printf("All even number in array is: %d", countEven(a, n));
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int countEven(int a[], int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
			count++;
	}
	return count;
}
