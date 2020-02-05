#include <stdio.h>

int produto(int a[],int b[],int n){
	
	int i,soma=0;
	
	for(i=0;i<n;i++){
		soma += a[i] + b[i];	
		return soma;
	}
}

int main(){
	
	int i,n1,n2,x=1;
	int vet1[x],vet2[x];
	
	printf("Quantas posicoes tem seu primeiro vetor: ");
	scanf("%i",&n1);
	printf("\nQuantas posicoes tem seu primeiro vetor: ");
	scanf("%i",&n2);
	
	if(n1!=n2){
		printf("\nValor invalido, eles tem que ser iguais. \n");
		return 0;
	}
	
	printf("\n\nDigite os valores para o seu primeiro vetor");
	
	for(i=0;i<n1;i++){
		printf("\nPara a posicao %i o valor e: ",i+1);
		scanf("%i",&vet1[i]);
	}
	
	printf("\n\nDigite os valores para o seu segundo vetor");
	
	for(i=0;i<n2;i++){
		printf("\nPara a posicao %i o valor e: ",i+1);
		scanf("%i",&vet2[i]);
	}
	
	printf("\nO produto interno desses vetores e igual a: %i \n\n",produto(vet1,vet2,n1));
	
	return 0;
}
