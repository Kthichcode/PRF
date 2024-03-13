#include <stdio.h>

int main(){
	char s[100];
	gets(s);
	int count = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= '0' && s[i] <= '9')
			count++;
		while(s[i] >= '0' && s[i] <= '9'){
			i++;
		}
	}
	printf("%d", count);
	return 0;
}





