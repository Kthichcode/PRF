#include <stdio.h>
int UCLN(int a, int b){
	if(a == 0 || b== 0){
		return a + b;
	}else{
		while(a != b){
			if(a > b)
				a = a - b;
			else
				b = b - a;
		}
		return a;
	}
}

int BCNN(int a, int b){
	return (a * b) / UCLN(a, b);
}
int main(){
	int a, b;
	printf("Input a, b: ");
	scanf("%d%d", &a, &b);
	
	printf("UCLN of %d and %d is %d\n", a, b, UCLN(a, b));
	printf("BCNN of %d and %d is %d", a, b, BCNN(a, b));
	
	return 0;
}
