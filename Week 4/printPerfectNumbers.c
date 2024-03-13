#include <stdio.h>
int findDivisor(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	return sum;
}
int checkPerfect(int n){
	if (findDivisor(n) == n)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		if(checkPerfect(i) == 1)
			printf("%d ", i);
	}
	return 0;
	
}
