#include <stdio.h>
#include <string.h>
void sumString();

int main(){
	sumString();
	return 0;
}

void sumString(){
	char s[100];
	int al = 0, digit = 0, ch = 0;
	gets(s);
	strupr(s);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			al++;
		else if(s[i] >= '0' && s[i] <= '9')
			digit++;
		else
			ch++;
	}
	printf("Total number of alphabets is: %d\n", al);
	printf("Total number of digits is: %d\n", digit);
	printf("Total number of special character is: %d", ch);
}
