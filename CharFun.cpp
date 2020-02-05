#include <stdio.h> 
// #include <ctype.h> (Tudo isso eh possivel ser feito com esse biblioteca.

int isdigit(char c){
	return(c>= '0' && c <= '9');
}
int isalpha(char c){
	return(c>= 'a' && c <= 'z' || c>= 'A' && c <= 'Z');
}
int isalnum(char c){
	return isdigit(c) || isalpha(c);
}
char tolower(char c){
	scanf("%c",&c);
	if (c>='a' && c<='z')
	return c+'A'-'a';
	else 
	return c;
}
char touooer(char c){
	scanf("%c",&c);
	if(c>= 'A' && c <= 'Z')
	return c+'a'-'A';
	else
	return c;
}
int main(){
	
	int opcao,c;
	char b;
	
	printf("O que voce quer descobrir ?\n");
	printf("1 - Se e um digito, 2 - Se e uma letra, 3 - Se e alphanumerico \n4 - A corespondente maiucula do caracter, 5 - A correspondente minuscula do caracter\n");
	scanf("%i",&opcao);
	printf("\n0 == Verdadeiro, 1 == Falso");
	
	if(opcao ==1){
		printf(" -- Digite um digito: ");
		scanf("%i",&c);
		printf("\n%i\n", c = isdigit(c));
	}
	else if(opcao ==2){
		printf(" -- Digite uma letra: ");
		scanf("%i",&c);
		printf("\n%i\n", c = isalpha(c));
	}
	else if(opcao ==3){
		printf(" -- Digite um caracter alphanumerico: ");
		scanf("%i",&c);
		printf("\n%i\n", c = isalnum(c));
	}
	else if(opcao ==4){
		printf(" -- Digite uma letra minuscula: ");
		tolower(b);
		printf("\n%c\n",b = tolower(b));
	}
	else if(opcao ==5){
		printf(" -- Digite uma letra Maiuscula: ");
		touooer(b);
		printf("\n%c\n",b = touooer(b));
	}
	
	
	return 0;
}
