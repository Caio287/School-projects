#include <stdio.h>

void mudar(int *a,int *b){
	
	
	
	 printf("Mude o valor da sua primeira variavel para: ");
	 scanf("%i",&a);
	 printf("\nMude o valor da sua segunda variavel para: ");
	 scanf("%i",&b);
	
}

int main(){
	
	int a,b;
	
	printf("Escreva o valor da sua primeira variavel: ");
	scanf("%i",&a);
	printf("\nEscreva o valor da seu segunda variavel: ");
	scanf("%i",&b);
	
	a,b = mudar(&a,&b);
	
	printf("\nA variavel a e igual a: %i",a);
	printf("\nA variavel b e igual a: %i",b);
	
	return 0;
}
