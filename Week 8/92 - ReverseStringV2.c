#include <stdio.h>
#include <string.h>
void resever(char ch[100]);

int main(){
	char ch[100];
	gets(ch);
	resever(ch);
	return 0;
}

void resever(char ch[100]){
	char store[100][100];
	int i=0;
	int j=0;
	int z=0;
	while(z<strlen(ch)){
		if( ch[z]==' ' ){
			store[j][i] = '.';
			++j;
			i=0;
		} 
		else{
			store[j][i] = ch[z];
			++i;
		}
		z++;
	}
	store[j][i]='.';
	char result[100];
	z=0;
	i=0;
	while( j>=0 ){
		while( store[j][i]!='.' ){
			result[z]=store[j][i];
			z++;
			i++;
		}
		result[z]=' ';
		z++;
		--j;
		i=0;
	}
	puts(result);
}
 
