#include <stdio.h>
#include <stdlib.h>

int *alok(int n){
	
	int *p;
	p = ( int* )malloc(n *  sizeof(int));
	if(p!=NULL){
		return p;
	}else{
		printf("\nMemoria insuficiente!\n");
		return NULL;
	}
	
}

float *alokf(float n){
	
	float *p;
	p = ( float* )malloc(n *  sizeof(float));
	if(p!=NULL){
		return p;
	}else{
		printf("\nMemoria insuficiente!\n");
		return NULL;
	}
	
}

float *alokf2(float n){
	
	float *p;
	p = ( float* )malloc(n *  sizeof(float));
	if(p!=NULL){
		return p;
	}else{
		printf("\nMemoria insuficiente!\n");
		return NULL;
	}
	
}

float *alokf3(float n){
	
	float *p;
	p = ( float* )malloc(n *  sizeof(float));
	if(p!=NULL){
		return p;
	}else{
		printf("\nMemoria insuficiente!\n");
		return NULL;
	}
	
}

void ler(int *dep, int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("Escreva a quantidade de votos para o deputador n%i:  ",i+1);
		scanf("%d",&dep[i]);
	}
	
}

void calculo(int *dep,int n, int n2, float *maior){
	
	int i,j,b=1,k,x;
	float matriz[100][100];

	for(i=0;i<n;i++){
			for(j=0;j<n;j++)
			matriz [i][j] = dep[i];
			
			maior[i] = 0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz[i][j] = matriz[i][i] / b;
			b++;
			printf("\n %i %i -- %4.1f\n",i,j,matriz[i][j]);
		}
		b=1;
	}
	
	k=0; b=0; ;i=0; j=0; x=0;
	
	do{
		
	for(i=x;i<n2;i++){
		for(j=k;j<n2;j++){
			if(matriz[i][j] > maior[b])
				maior[b] = matriz[i][j];
		}
		b++;
	}	
 
	k++;
	x++;
	
	}while(b != n2);
	
		for(i=0;i<n2;i++)
		printf("\n%f\n",maior[i]);
			
}


int main(){
	
	int n,n2;
	int *dep;
	float *dep2;
	float *maior;
	float *maior2;
	
	printf("Quantos deputados voce tem ?  ");
	scanf("%i",&n);
	printf("Quantoas lugares voce deseja preencher ?  ");
	scanf("%i",&n2);
	
	dep2 = alokf(n);
	maior = alokf2(n);
	dep = alok(n);
	maior2 = alokf3(n);
	
	ler(dep,n);
	
	calculo(dep,n,n2,maior);
	
	free(dep);
	free(dep2);
	free(maior);
	free(maior2);
	
	
	
	// dep 1 - 10 /1 /2 /3 /4 
	// dep 2 - 30 /1 /2 /3 /4 
	// dep 3 - 40 /1 /2 /3 /4 
	
	
	return 0;
}
