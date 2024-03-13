#include <stdio.h>
#include <math.h>
void inputArray(int a[], int n);
int checkPrime(int n);
int secondPrime(int a[], int n);

int main(){
	int n, a[n];
	int i = 0;
	printf("Input n: ");
	scanf("%d", &n);
	inputArray(a, n);
	printf("%d", secondPrime(a, n));
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

int secondPrime(int a[], int n){
	int count = 0;
	int flag =0, temp;
	for(int i = 0; i < n; i++){
		if(checkPrime(a[i]) == 1)
			count++;
		if(count == 1&&flag == 0){
			temp = i;
			flag = 1;
		}
		
		if(count == 2)
			return i;	
	}
	if(count == 0)
		return a[0];
	if(count == 1)
		return temp;
}


