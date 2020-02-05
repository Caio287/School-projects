#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sinal =1,i,j;
	float soma=1;
	
	
	printf("Introduza um numero: ");
	scanf("%d",&j);
	
	for(i=1;i<j;i++){
		sinal =-sinal;
		soma = soma + sinal /(2.0*i);
}

printf("%f\n\n",soma);
	system ("pause");
	return 0;
}
