#include <stdio.h>


int main(){
	int a, b, c, t;
	
	printf("Input a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a > b){
		t = a;
		a = b;
		b = t;
	}
	
	if (b > c){
		t = b;
		b = c;
		c = t;
	}
	
	if (a > b){
		t = a;
		a = b;
		b = t;
	}
	printf("%d %d %d", a, b, c);
	
	return 0;
	
}
