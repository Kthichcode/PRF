#include <stdio.h>

int main(){
	int m, h, r;
	printf("Input m: ");
	scanf("%d", &m);
	
	h = m / 60;
	r = m % 60;
	
	printf("%d minutes = %dh%dm", m, h, r);
	
}
