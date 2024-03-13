#include <stdio.h>
#include <math.h>
int main(){
	int n, sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            
            sum -= i;
        } else {
            
            sum += i;
        }
    }
	
	printf("Sum is: %d", sum);
	return 0;
}
