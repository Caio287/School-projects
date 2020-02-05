#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	
	int i,n,j,v=1,g=1;
	float soma = 0.0;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d",&n);
	
	
			
	for(i=1;i<=n;i++){
		
		// Pode ser feito assim: 2^(i-1) / (i-1) // 
		
		v = v*2;
			g = g*i;
		
		
		soma = soma + (float)v/g;
		
	}
		printf("\n\tSomatorio = %0.4f\n\n", soma);
	
	
	system ("pause");
	return 0;

}
