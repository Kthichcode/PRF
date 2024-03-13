#include <stdio.h>
#include <string.h>

void totalString();

int main(){
	totalString();
	return 0;
}

void totalString(){
	char s[100];
	int vowels = 0, consonants = 0;
	gets(s);
	strupr(s);
	
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			if(s[i] == 'U' || s[i] == 'E' || s[i] == 'O' || s[i] == 'A' || s[i] == 'I')
				vowels++;
			else
				consonants++;	 
		}
	}
	
	printf("Total number of vowels is: %d\n", vowels);
	printf("Total number of consonants is: %d", consonants);

}
