#include <stdio.h>
void inputArray(int a[], int n);
void sortArray(int a[], int n);
void printArray(int a[], int n);

int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	sortArray(a, n);
	printf("After sorting: \n");
	printArray(a, n);
	
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void swap(int* a, int* b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void sortArray(int a[], int n){
	int t;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j])
				swap(&a[i], &a[j]);
		}
	}
}

void printArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
		
	}
}
