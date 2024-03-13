#include <stdio.h>
#include <string.h>
int findLastCString(char s[], char c);
int main(){
	char s[100], c;
	gets(s);
	printf("Input character to find: ");
	scanf("%c", &c);
	
	if(findLastCString(s, c) != 0)
		
		printf("Character %c in index: %d", c, findLastCString(s, c));
	else
		printf("Don't see %c in string", c);
	return 0;
}

int findLastCString(char s[], char c){
	int index = 0;
	for(int i = 0; i < strlen(s) ; i++){
		if(s[i] == c)
			index = i;
	}
	return index;
}
