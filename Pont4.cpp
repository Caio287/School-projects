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

float *alokf4(int n, int n2){
	
	float *p;
	p = ( float* )malloc(n * n2 * sizeof(float));
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

void calculo(int *dep, int n,int n2,float *maior, float *dep2,float *maior2,float *matriz[100][100]){
	
	int i,j=0,b=0,c=1,aux;
	
	for(i=0;i<n;i++){
		maior[i] = 0.0;
		dep2[i] = 0.0;
		maior2[i]= 0.0;
	}
	
	for(i=0;i<n;i++){
		
		for(b=0;b<n;b++){
			
			dep2[i] = dep[b] / c;
			
			matriz[i][b] = dep2[i];
		
			c++;
			j++;
			
			printf("\n %i",matriz[i][b]);
		}
		
	}
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
		if(matriz[i][j]*1.0 > maior[j]){
			maior[j] = matriz[i][j]*1.0;
		}else if(matriz[i][j]*1.0 > maior2[j] && matriz[i][j]*1.0 != maior[j]){
			maior2[j] = matriz[i][j]*1.0;
		}
		
	}
	
	printf("\n %4.1f %4.1f",maior[i],maior2[j]);
	
} 
	
}

int main(){
	
	int n,n2;
	int *dep;
	float *dep2;
	float *maior;
	float *maior2;
	float *matriz;
	
	printf("Quantos deputados voce tem ?  ");
	scanf("%i",&n);
	printf("Quantoas lugares voce deseja preencher ?  ");
	scanf("%i",&n2);
	
	dep2 = alokf(n);
	maior = alokf2(n);
	dep = alok(n);
	maior2 = alokf3(n);
	matriz = alokf4(n,n);
	
	ler(dep,n);
	
	calculo(dep,n,n2,maior,dep2,maior2);
	
	free(dep);
	free(dep2);
	free(maior);
	free(maior2);
	
	
	
	// dep 1 - 10 /1 /2 /3 /4 
	// dep 2 - 30 /1 /2 /3 /4 
	// dep 3 - 40 /1 /2 /3 /4 
	
	
	return 0;
}
