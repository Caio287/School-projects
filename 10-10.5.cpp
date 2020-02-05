#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int A,B,x;
	
	inicio: 
	
	printf("\n\tDigite um valor (10 - 15.5 Fim do Programa): ");
	scanf("%i", &A);
	
	if (A>= 10 && A<=15.5){
		printf("\n\tO Valor nao e valido\n\n");
		puts("\tFim do programa");
	}
	else{
		printf("\n\tO Valor e valido\n\n");
		goto inicio;
	}
	
}
