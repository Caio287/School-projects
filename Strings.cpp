#include <stdio.h>

#define MAX 100

void juntar(char *a, char *b){
	
	while(*a!='\0'){
		a++;
	}
	while(*b!='\0'){
		*a = *b;
		a++;
		b++;
		
	}
	*a = *b;
	
	
}

int main(){
	
	char a[MAX],b[MAX];
	
	printf("Escreva uma palavra:  ");
	scanf(" %s",&a);
	printf("Escreva outra palavra:  ");
	scanf(" %s",&b);
	
	juntar(a,b);
	printf("\nAs strings juntas ficou:  %s",a);

	
	return 0;
}
