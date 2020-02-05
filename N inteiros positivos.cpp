#include <stdio.h>

int main(){
	
	int i,n,soma=0;
	
	printf("Introduza um numero: ");
	scanf("%i",&n);
	
	for (i=1;i<=n;i++){
		soma = soma +i;
		printf("\n%d\n",soma);
	}
	
	return 0;
}
