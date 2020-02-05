#include <stdio.h>

int main (){
	
	int a,b,produto=1,soma=0;
	
	printf("Escreva um numero inteiro: ");
	scanf("%i",&a);
	
	printf("\nEscreva outro numero inteiro: ");
	scanf("%i",&b);
	
	for(a;a<=b;a++){
		soma += a;
		produto *=a;
	}
	
	printf("\n%i",soma-1);
	printf("\n%i",produto);
	
	return 0;
}
