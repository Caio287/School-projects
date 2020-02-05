#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int A,B,x;
	
	inicio: 
	
	printf("\n\tDigite um valor: ");
	scanf("%i", &A);
	
	if (A>= 0 && A<=9){
		printf("\n\tO Valor e valido\n\n");
	}
	else{
		printf("\n\tO Valor nao e valido\n\n");
		goto inicio;
	}
	
	
	
	
	
	
}
