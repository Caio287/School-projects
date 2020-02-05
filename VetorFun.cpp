#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void vetor(int n,int vet[]){
	
	int i=0;
	
	for(i=0; i<n; i++) {
        printf("\nEntre com um numero: ");
        scanf("%i",&vet[i]);
    }
	
}

void escrever(int n,int vet[]){
	
	int i=0;

	
	for(i=0; i<n; i++) {
        printf("\nO vetor da posicao %i e:  %i\n",i+1,vet[i]);
    }
	
}

int maior(int n,int vet[]){
	
	int i=0,maior,maiorPosicao;
	
	for(i=0;i<n;i++){
		
			if(i == 0) {
            maior = vet[i];
            maiorPosicao = i;
        }
        if(vet[i] > maior) {
            maior = vet[i];
            maiorPosicao = i;
       	}  
		
	}
	
	return maiorPosicao+1;
}

int main(){
	
	int n, vet[MAX];

	printf("Escreva o n de seus vetores:  ");
	scanf("%i",&n);
	
	vetor(n,vet);
	
	escrever(n,vet);
	
	printf("\nA maior posicao e igual a: %i\n\n",maior(n,vet));
	
	
	

	system ("pause");
	return 0;
}
