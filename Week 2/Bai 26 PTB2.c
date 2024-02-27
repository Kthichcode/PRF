#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, x1, x2, delta;
	printf("Input a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	
	delta = b*b - (4*a*c);
	
	if(delta < 0)
		printf("Pt vo nghiem");
	else if(delta == 0){
		
		printf("Pt co nghiem kep x1 = x2 = %f", -b / (2*a));
	}else{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("Pt co 2 nghiem x1 = %f, x2 = %f", x1, x2);
	}
	return 0;
}
