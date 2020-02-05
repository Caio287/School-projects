#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num,par=0,soma=0;
	printf("Introduza um numero positivo: ");
	scanf("%i",&num);
	while(soma<num){
		par =par+2;
		soma =soma+par;
		printf("Resultado e: %d\n", par-2);
	}
	
	
	
	system ("pause");
	return 0;
}
