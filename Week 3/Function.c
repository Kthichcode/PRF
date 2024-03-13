#include <stdio.h>
float Maximum(float a, float b){
	float max = a;
	if(max < b)
		max = b;
	return max;
	
}

float Minimum(float x, float y){
	float min = x;
	if(min > y)
		min = y;
	return min;
	
}
int main(){
	float a, b;
	printf("Input a, b: ");
	scanf("%f%f", &a, &b);
	float max = Maximum(a, b), min = Minimum(a, b);
	
	printf("Max is %f, Min is %f",max, min);
	
	return 0;
}
