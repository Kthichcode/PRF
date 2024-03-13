#include <stdio.h>
void inputArray(int a[], int n);
int firstEvenNumber(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	if(firstEvenNumber(a, n) == a[0])
		printf("The first number in array is: %d", a[0]);
	else
		printf("The first even number in array is: %d", firstEvenNumber(a, n));
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int firstEvenNumber(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
			return a[i];	
	}
	return a[0];
}
