#include <stdio.h>
int main(){
	int n, S = 0;
	
	int i = 1;
/*
	for(int i = 1; i <= n; i++){
		S += i;
	}
	
	while(i <= n){
		S += i;
		i++;
	}
*/
	do{
		printf("Input n: ");
		scanf("%d", &n);
	
		S += n;
	}while(n != 0);
	
	printf("Sum is: %d", S);
	
	return 0;
}
