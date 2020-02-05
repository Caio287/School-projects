#include <stdio.h>
#include <stdlib.h>

int *alok(int nl, int nc){
	
	int *p;
	p = ( int* )malloc(nl * nc * sizeof(int));
	if(p!=NULL){
		return p;
	}else{
		printf("\nMemoria insuficiente!\n");
		return NULL;
	}
	
}

void lerm(int *matriz, int nl, int nc){
	
	int i=0,j=0;
	
	for(i=0;i<nl;i++){
		for(j=0;j<nc;j++){
			printf("Matriz[%i][%i]:  ",i+1,j+1);
			scanf("%d",matriz);
			
		}
		matriz++;
	}
	
	printf("\n");
	
}

void escrevm(int *matriz, int nl,int nc){
	
	int i=0,j=0;
	
	for(i=0;i<nl;i++){
		for(j=0;j<nc;j++){
			printf("Matriz[%i][%i]: %d \n",i+1,j+1,*matriz);
			
		}
		matriz++;
	}
	
	printf("\n");
	
}

int devpos(int i,int j,int nc){
	return i*nc+j;
}

int simetria(int *m,int n){
	int i,j, pos_ij, pos_ji;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			pos_ij = devpos(i,j,n);
			pos_ji = devpos(j,i,n);
			if(*(m+pos_ij)!=*(m+pos_ji)){
				return 0;
			}else{
				return 1;
			}
		}
	}
	
	
}

int traco(int *m,int n){
	
	int soma,i,pos_ii;
	soma = 0;
	for(i=0;i<n;i++){
		pos_ii = devpos(i,i,n);
		soma = soma + *(m+pos_ii);
	}
	return soma;
	
}

void multiplicar(int *a, int *b, int *c, int nl, int nc,int n){
	
	int i,j,k,soma,pos_ik,pos_kj;
	
	for(i=0;i<nl;i++){
		for(j=0;j<nc;j++){
			soma = 0;
			for(k=0;i<n;k++){
				pos_ik = devpos(i,k,n);
				pos_kj = devpos(k,j,n);
				soma = soma + *(a+pos_ik) *(*(b+pos_kj));
				
				*c=soma;
				c++;
			}
		}
		
	}
	
}

int main(){
	
	int n1,n2;
	int *matriz;
	int *b,*c,n3;
	
	printf("Quantas linhas tem a sua matriz ?  ");
	scanf("%i",&n1);
	printf("Quantas colunas tem a sua matriz ?  ");
	scanf("%i",&n2);
	printf("\n");
	
	matriz = alok(n1,n2);
	
	lerm(matriz,n1,n2);
	
	escrevm(matriz,n1,n2);
	
	printf("0 se for simetrica e 1 se nao:  %d \n",simetria(matriz,n1));
	
	printf("O traco e:  %d \n\n",traco(matriz,n1));
	
	printf("Quantas colunas tem a matriz B?  ");
	scanf("%i",&n3);
	printf("\n");
	
	b = alok(n1,n3);
	c = alok(n1,n3);
	lerm(b,n1,n3);
	
	multiplicar(matriz,b,c,n1,n3,n2);
	
	escrevm(c,n1,n3);
	
	free(matriz);
	free(b);
	free(c);
	
	return 0;
}
