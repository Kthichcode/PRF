#include <stdio.h>

int main(){
	
	float c, f;
	
	printf("Input temperture(Celsius): ");
	scanf("%f", &c);
	
	f = (c * (float)9/5) + 32;
	printf("Temperture(Fahrenheit) is: %f", f);
	
	return 0;
}
