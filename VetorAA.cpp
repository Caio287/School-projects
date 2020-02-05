#include <stdio.h>
#include <stdlib.h>

int vetor(int n, int maior=0, int menor=0,int maiorPosicao=0,int menorPosicao=0){
	
	int i=0;
	int valor[n];
	printf("%i",&n);
	
	for(i=0; i<n; i++) {
        printf(" Entre com um numero: ");
        scanf("%i",&valor[i]);
        if(i == 0) {
            maior = valor[i];
            menor = valor[i];
            maiorPosicao = i;
            menorPosicao = i;
        }
        if(valor[i] > maior) {
            maior = valor[i];
            maiorPosicao = i;
            
        if(valor[i] < menor) {
            menor = valor[i];
            menorPosicao = i;
            
        }
    }
	
        
}
	return maior;
    return maiorPosicao;
    return menor;
    return menorPosicao;
}

int main(){
	
	int maior,menor,maiorPosicao,menorPosicao,n;
	
	printf("Digite a quantidade de componentes do seu vetor: ");
	scanf("%i",&n);
	
	vetor(n);
	
	maior=vetor(maior);
	menor=vetor(menor);
	maiorPosicao=vetor(menorPosicao);
	menorPosicao=vetor(menorPosicao);
	
    printf("\n Maior valor: %d  Posicao %d",maior,maiorPosicao);
    printf("\n Menor valor: %d  Posicao %d\n\n",menor,menorPosicao);
	
	system ("pause");
	return 0;
}
