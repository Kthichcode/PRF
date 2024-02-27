#include <stdio.h>
// Write a program that allows input hours, minutes and seconds and convert it to seconds and print the result.
//Ex: Input: h=1, m=2, s=2. Output: 3722 seconds.
int main(){
	int h, m, s, sum;
	printf("Input h, m, s: ");
	scanf("%d%d%d", &h, &m, &s);
	sum = (h*3600) + (m*60) + s;
	
	printf("%dh%dm%ds = %d seconds", h, m, s, sum);
	
	return 0;
}
