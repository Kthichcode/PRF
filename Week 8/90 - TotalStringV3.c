#include <stdio.h>
#include <string.h>
void countWord();

int main() {
    countWord();
    return 0;
}

void countWord(){
	char s[100];
	int count = 0;
	gets(s);
	strupr(s);
	
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == ' ')
			count++;
	}
	printf("Total number of words is: %d", count + 1);
	return 0;
}

