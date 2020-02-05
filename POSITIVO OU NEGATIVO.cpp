#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int Valor;
	
	printf("Digite qualquer valor:\n ");
	scanf("%i", &Valor);
	
	if(Valor > 0){
		
		printf("O Valor e positivo\n");
	}
	else if (Valor < 0){
		printf("O Valor e negativo\n");
	}
	
	

	

	return 0;
	
	}
