#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x=1,vetor[x],i,p,q,multi,controle=1,mani,n;
	int c;
	
	system("color A");
	
	printf("Assumido que sabes as posicoes de vetores --- \n");
	printf("Quantas posicoes tem o seu vetor: ");
	scanf("%i",&x);
	
	for(i=0;i<x;i++){
		printf("\nEscreve o vetor de posicao %i: ",i);
		scanf("%i",&vetor[i]);
	}
	
	multi:
	
	system("cls");
	
	printf("\n\nQual o primero vetor quer voce quer multiplicar: ");
	scanf("%i",&p);
	printf("\nQual o segundo vetor quer voce quer multiplicar: ");
	scanf("%i",&q);
	
	multi = vetor[p]*vetor[q];
	
	printf("\nVetor %i(%i) vezes o vetor %i(%i) e igual a: %i\n", p,vetor[p],q,vetor[q],multi);
	
	printf("Voce quer saber os vetores ? (1 - Sim ou 0 - Nao): ");
	scanf("%i",&mani);
	if(mani==1){
		for(i=0;i<x;i++){
			printf("\n%i -- Posicao (%i)\n",vetor[i],i);
		}
	}
	
	
	printf("\nVoce quer trocar algum vetor por outro ? (1 - Sim ou 0 - Nao): ");
	scanf("%i",&mani);
	if(mani ==1){
		printf("\nDigite a primeira posicao a trocar: ");
		scanf("%i",&p);
		printf("\nDigite a segunda opcao a trocar: ");
		scanf("%i",&q);
		
		vetor[p] = vetor[q];
		vetor[q] = vetor[p];
		
		printf("Voce quer ver seus vetores novos ? (1 - Sim ou 0 - Nao): ");
		scanf("%i",&n);
		
		if(n==1){
		for(i=0;i<x;i++){
			printf("\n%i\n",vetor[i]);
		}
		
		printf("\n");
		system("pause");
			
		goto multi;
	}

	
	
	}

	
	return 0;
}
