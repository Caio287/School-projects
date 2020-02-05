#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void lerv (int vetor[MAX], int n){
	
	int i,vetor2[MAX];
	for(i=0;i<n;i++){
		printf("Para a posicao %i:  ",i+1);
		scanf("%i",&vetor[i]);
}	
}

void escrevev (int vetor[MAX],int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("Posicao %i:  %i\n",i+1,vetor[i]);
	}
	
}

void escrevei (int vetor[MAX], int n){
	
	int i,temp,vetor2[MAX];
	  for(i=0;i<n;i++){
		vetor2[i] = vetor[i];
	}
	  for (i = 0; i < n/2; ++i)
   {
     	 temp = vetor2[i];
      vetor2[i] = vetor2[n - i - 1];
      vetor2[n - i - 1] = temp; 
      	
   }
   for (i = 0; i < n; ++i)
      printf("Posicao %i invertida:  %i\n",i+1,vetor2[i]);
   
}

void mm (int vetor[MAX], int n){
	
	int i,maior = vetor[0], menor = vetor[0];
	
	for(i=0;i<n;i++){
        if(vetor[i] > maior) {
            maior = vetor[i];
            
        if(vetor[i] < menor) {
            menor = vetor[i];
            
        }
    }
}

printf("O maior valor e:  %i e o menor valor e:  %i\n",maior,menor);

}

float mediam(int vetor[MAX], int n){
	
	int i;
	float media,soma;
	for(i=0;i<n;i++){
		
		
		soma+=vetor[i];
	}
	
	return (media = (soma/(float)n));
	
}

void medias(int vetor[], int n){
	
	int i;
	int menorm=0,maiorm=0,igualm=0;
	float media,soma;
	
	for(i=0;i<n;i++){
	
		soma+=vetor[i];
}
	media = (soma/(float)n);
	
	for(i=0;i<n;i++){
		if(vetor[i]>media){
			maiorm++;
		}else if(vetor[i]<media){
			menorm++;
		}else if(vetor[i]==media){
			igualm++;
		}
	}
	
	printf("\nO seu vetor tem %i valores maiores que a media, %i menores e %i igual a media\n",maiorm,menorm,igualm);
}

void intercalar (int vetor[MAX], int n){
	
	int i=0,k=0,j=0,vetor3[MAX*2],vetor2[MAX],p,temp;
	
	p = 2*n;
	
	for (i = 0;i<n; ++i)
   {
      vetor2[i]=vetor[i];
      	
   }
	
	for (i = 0;i<n/2; ++i)
   {
      temp = vetor2[i];
      vetor2[i] = vetor2[n - i - 1];
      vetor2[n - i - 1] = temp; 
      	
   }
   
	for(i=0;i<p;i++){
 	if(i%2==0){
    	vetor3[i]=vetor[j];
      	j++;
    }else{
    	vetor3[i]=vetor2[k];
      	k++;
    }
}

	printf("A juncao desses dois vetores invertida e igual a:  ");
	for(i=0;i<p;i++){
		printf("%i ",vetor3[i]);
	}
}


int main(){
	
	int n,vetor[MAX];
	printf("Escreva quantas posicoes tem seu vetor:  ");
	scanf("%i",&n);
	printf("--Escreva os valores do seu vetor---\n");
	
	lerv(vetor,n);
	printf("--------------------------------------\n");
	printf("Os seu vetor e:  \n");
	escrevev(vetor,n);
	printf("--------------------------------------\n");
	printf("Os seu vetor invertido sao:  \n");
	escrevei(vetor,n);
	printf("--------------------------------------\n");
	printf("Os seu vetor tem como maior e menor:  \n");
	mm(vetor,n);
	printf("--------------------------------------\n");
	printf("Os seu vetores tem como media:  %1.f\n",mediam(vetor,n));
	printf("--------------------------------------\n");
	printf("Os seu vetor tem as medias:  ");
	medias(vetor,n);
	printf("--------------------------------------\n");
	printf("Os vetores intercalados sao:  \n");
	intercalar(vetor,n);
	return 0;
}
