#include <stdio.h>

int main(){
	int a;
	
	do {
		
		printf("Input a (2....8): ");
		scanf("%d", &a);
		
		
		switch (a){
			case 2:
				printf("Monday");
				break;
			case 3:
				printf("Tuesday");
				break;
			case 4:
				printf("Wednesday");
				break;
			case 5:
				printf("Thursday");
				break;
			case 6:
				printf("Friday");
				break;
			case 7:
				printf("Saturday");
				break;
			case 8:
				printf("Sunday");
				break;
			default:
				printf("Please input again. Input 2 to 8\n");
		
		}
	}while(a < 2 || a > 8);
	
	return 0;
}
