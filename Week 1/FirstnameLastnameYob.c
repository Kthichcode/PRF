#include <stdio.h>

int main() {
	
	char firstname[50], lastname[50];
	int yob;
	
	printf("Input your firstname: ");
	scanf("%s", firstname);
	
	printf("Input your lastname: ");
	scanf("%s", lastname);
	
	printf("Input your years of birth: ");
	scanf("%d", &yob);
	
	printf("%s %s %d", firstname, lastname, yob);
	
	
	return 0;
}
