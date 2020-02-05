#include <stdio.h>
#include <stdlib.h>

int troca (int *a, int *b){   
    int aux;    
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
	
	int i,j,mani=1;
	
	system("color A");
	
	printf("Digite um numero: ");
	scanf("%i",&i);
	
	printf("\nDigite outro numero: ");
	scanf("%i",&j);
	
do{
	
	
	printf("\nOs numeros digitados sao %i e %i voce deseja trocalos ? (1 - Sim || 0 - Nao): ",i,j);
	scanf("%i",&mani);
	
	if(mani == 1){
		
	 troca(&i,&j);
	 
	 printf("\nI e igual a %i e J e igual a %i\n", i, j);
		
	}
	
	
}while(mani ==1);

	return 0;
}
