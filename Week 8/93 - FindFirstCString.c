#include <stdio.h>
#include <string.h>

int findFirstCString(char s[], char c);

int main(){
	char s[100], c;
	gets(s);
	printf("Input character to find: ");
	scanf("%c", &c);
	
	if(findFirstCString(s, c) != 0)
		printf("Character %c in index: %d", c, findFirstCString(s, c));
	else
		printf("Don't see %c in string", c);
		
	return 0;
}

int findFirstCString(char s[], char c){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == c)
			return i;
	}
	return 0;
}
