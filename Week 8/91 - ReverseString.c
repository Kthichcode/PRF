#include <stdio.h>
void reverseString();
int main(){
	reverseString();
	return 0;
}

void reverseString(){
	char s[100];
	int count = 0;
	gets(s);
	
	for(int i = 0; i < strlen(s); i++){
		count++;
	}
	
	for(int i = count; i >=0; i--){
		printf("%c", s[i]);
	}
		
}

