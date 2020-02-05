#include <stdio.h>

int main (){
	
	int i,n,x=1,x2=1,p,j=0,k=0,soma=0,media,maiorm=0,menorm=0,vetor[x],vetor2[x2],vetor3[x2*2];
	int maior = vetor[0], menor = vetor2[0];
	int temp;
	
	
	printf("Escreva a quantidade de vetores N: ");
	scanf("%i",&n);
	
	p=2*n;
	
	for(i=0;i<n;i++){
		printf("\nPos %i --- ",i);
		scanf("%i",&vetor[i]);
        if(vetor[i] > maior) {
            maior = vetor[i];
            
        if(vetor[i] < menor) {
            menor = vetor[i];
            
        }
    }
    
    soma += vetor[i];
    
	}
	
	for(i=0;i<n;i++){
		vetor2[i] = vetor[i];
	}
	
	printf("--------------------------------------");
	
	printf("\nO Maior vetor e %i e o menor e o %i",maior,menor);
	
	printf("\n--------------------------------------");
	
	printf("\nA soma dos vetores e: %i",soma);
	
	printf("\n--------------------------------------");
	
	printf("\nA media dos vetores e igual a: %i",media = soma/n);
	
	printf("\n--------------------------------------");
	
	printf("\nOs seus vetores sao: ");
	printf("\t");
	for(i=0;i<n;i++){
		
		printf("\t%i",vetor[i]);
		
	}
	
	printf("\n--------------------------------------");
	
	printf("\nO vetore invertidos sao: ");
   for (i = 0; i < n/2; ++i)
   {
     	 temp = vetor2[i];
      vetor2[i] = vetor2[n - i - 1];
      vetor2[n - i - 1] = temp; 
      	
   }
   for (i = 0; i < n; ++i)
      printf("\t%i",vetor2[i]);
	
	printf("\n-------------------------------------");
	
	i=0;
	while(i<n){
		i++;
		if(vetor[i]>media){
			maiorm++;
		}
		else if(vetor[i]<media){
			menorm++;
		}
	}
	printf("\nEsse vetor tem %i valores maior que a media e %i menores",maiorm,menorm);
	i=0;
	
	printf("\n--------------------------------------");
	
	printf("\nAgora voce tem dois vetores iguais");
	
	printf("\n--------------------------------------");
	
	for(i=0;i<p;i++){
 	if(i%2==0){
    	vetor3[i]=vetor[j];
      	j++;
    }else{
    	vetor3[i]=vetor2[k];
      	k++;
    }
}
	printf("\nA juncao desses dois vetores invertida e igual a: ");
	for(i=0;i<p;i++){
		printf("%i ",vetor3[i]);
	}
	
	
	
	
	
	return 0;
}
