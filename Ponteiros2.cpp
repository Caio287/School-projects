#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int** alok(int Linhas,int Colunas){ 
 
  int i,j; 
 
  int **m = (int**)malloc(Linhas * sizeof(int*));
 
  for (i=0; i < Linhas; i++){ 
       m[i] = (int*) malloc(Colunas * sizeof(int)); 
       for (j = 0; j < Colunas; j++){ 
            m[i][j] = 0;
       }
  }
  
	return m; 

}

void lerm(int *matriz, int nl, int nc){
	
	int i=0,j=0;
	
	for(i=0;i<nl;i++){
		for(i=0;i<nc;i++){
			printf("Matriz[%i][%i]:  ",i+1,j+1);
			scanf("%d",&matriz);
			matriz++;
		}
	}
	
	printf("\n");
	
}

void escrevm(int *matriz, int nl,int nc){
	
	int i=0,j=0;
	
	for(i=0;i<nl;i++){
		for(i=0;i<nc;i++){
			printf("Matriz[%i][%i]: %d ",i+1,j+1,*matriz);
			matriz++;
		}
	}
	
	printf("\n");
	
}

int main(){
	
	int i,j;
	int n1,n2;
	int *matriz;
	
	printf("Quantas linhas tem a sua matriz ?  ");
	scanf("%i",&n1);
	printf("Quantas colunas tem a sua matriz ?  ");
	scanf("%i",&n2);
	
	alok(n1,n2);
	
	lerm(matriz,n1,n2);
	
	escrevm(matriz,n1,n2);
	
	return 0;
}
