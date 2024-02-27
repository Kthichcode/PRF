#include <stdio.h>

int main(){
	
	float a, b, x;
	printf("Input a, b: ");
	scanf("%f%f", &a, &b);
	
	if(a == 0 && b != 0)
		printf("PT %.0fx + %.0f = 0 vo nghiem", a, b);
	else if(a == 0 && b == 0)
		printf("PT %.0fx + %.0f = 0 vo so nghiem", a, b);
	else{
		x = -b / a;
		printf("PT %.0fx + %.0f = 0 co nghiem la: %f", a, b, x);
	}
	return 0;	
}
