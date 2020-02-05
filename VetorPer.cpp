#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
	
	int i=0,n,vetor[MAX],aux;
	int n2,n3;
	
	printf("\nDigite o numero de posicoes que o seu vetor tem:  ");
	scanf("%i",&n);
	
	printf("\n");
	
	for(i=0;i<n;i++){
		
		printf("Escreva o vetor da posicao %i:  ",i+1);
		scanf("%i", &vetor[i]);
		
	}
	
	printf("\nPermutado circularmente: ");
	aux = vetor[0];
	for (i=0;i<n-1;i++){
		vetor[i] = vetor[i+1];
		vetor[n-1]=aux;
		printf("%i ",vetor[i]);
	}
	
	printf("\n\nDigite a primeira posicao a trocar:  ");
	scanf("%i",&n2);
	printf("Digite a seunda posicao a trocar:  ");
	scanf("%i",&n3);
	printf("\n");
	
	aux = vetor[n2-1];
	vetor[n2-1]  = vetor[n3-1];
	vetor[n3-1] = aux;
	
	for(i=0;i<n;i++){
		
		printf("\nO vetor da posicao %i e: %i ",i+1,vetor[i]);
		
	}
	
	
	
	
	// 1 2 3 4 5 ==  5 4 3 2 1 == 1 3 2 4 5 
	
	return 0;
}
