#include <stdio.h>

int main(){
	float r, d, c, area;
	printf("Input r: ");
	scanf("%f", &r);
	d = r * 2;
	c = d * 3.14;
	area = r * r * 3.14;
	
	printf("Diameter of the circle is: %.2f\n", d);
	printf("Circumference of the circle is: %.2f\n", c);
	printf("Area of the circle is: %.2f\n", area);
	
	return 0;
}
