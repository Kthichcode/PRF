#include <stdio.h>
void inputArray(int a[], int n);
int findNumber(int a[], int n, int x);

int main(){
	int n, a[100], x;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	printf("Input x: ");
	scanf("%d", &x);
	
	inputArray(a, n);
	
	if (findNumber(a, n, x) != -1) {
        printf("The first index of %d in the array is: %d\n", x, findNumber(a, n, x));
    } else {
        printf("%d is not found in the array.\n", x);
    }
	return 0;
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int findNumber(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			return i;
	}
	return -1;
}
