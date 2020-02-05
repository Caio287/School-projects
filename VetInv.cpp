#include <stdio.h>
#include <stdlib.h>

#define swap(a,b)        do{ int tmp = a; a = b; b = tmp; } while(0)
#define sizeof_vector(v) (sizeof(v) / sizeof(v[0]))


void inverter( int vetor[], int tam )
{
    int i = 0;

    for( i = 0; i < (tam / 2); i++ )
        swap( vetor[i], vetor[tam - i - 1]);
}

int main(){
	
	int i,p=0,j=0,k=0,temp,vet1[4]{1,3,5,7},vet2[4]{2,4,6,8},vet2inv[4],vet3[8];
	
	inverter( vet2, sizeof_vector(vet2) );
	
	for(i=0;i<8;i++){
 	if(i%2==0){
    	vet3[i]=vet1[j];
      	j++;
    }else{
    	vet3[i]=vet2[k];
      	k++;
    }
}
	
	printf("\nA juncao dos vetores e: ");
	for(i=0;i<8;i++){
		printf("%i ",vet3[i]);
	}
	
	return 0; 
}
