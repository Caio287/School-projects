#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertestr(char *s){
	int i=0,j=0;
	char s2[255];

	for(j=0;s[j]!='\0';j++){
		i++;
	}
	for(j=0;s[j]!='\0';j++){
		s2[i]=s[j];
		i--;
	}
	printf("%s\n\n",s2);
}

void limparbuffer(){
	char c;
	while((c=getchar()) != '\n' && c != EOF);
}

int main(){

	char s[]="Ola mundo como vai ?";
	invertestr(s);
	
	system("pause");
	return 0;
}

