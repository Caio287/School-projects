#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("color A");
	
	int numero = 1,maior = 0,menor = 0;
printf("Introduza um numero (0 para sair) \n");

do{
	
	printf("Introduza um numero: ");
	scanf("%d", &numero);
	
	if(numero > 0){
			if (numero > maior)
			{
				maior = numero;
			}
			if (menor == 0){
			menor = numero;
			}
		else if(numero < menor)
		{
			menor = numero;
		}
			
			
	}
	}while(numero >0);
	
	printf("Menor valor: %d\nMaior valor: %d\n",menor,maior);
		
		
		
		
	
	
	
	
	
	system ("pause");
	return 0;
}
