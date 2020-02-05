#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

#define MAX 100

void matriz(int mat[MAX][MAX],int n1,int n2){
	
	int i,j;
	
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf ("\nElemento[%d][%d] = ", i+1, j+1);
      		scanf ("%d", &mat[ i ][ j ]);
      		
		}
	}
	
}

void mostrar(int mat[MAX][MAX], int n1, int n2){
	
	int i,j;
	
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf ("\nElemento da matriz[%i][%i] = %i ", i+1, j+1,mat[i][j]);
		}
	}
}

int minimo(int mat[MAX][MAX], int n1, int n2){
	
	int i,j,min = mat[0][0];
	
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			
			if(mat[i][j] < min){
				min = mat[i][j];
			}
			
		}
	}
	return min;
}

void transposta(int mat[MAX][MAX], int n1, int n2){
	
	int i,j;
	
	for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            cout<< mat[j][i];
        }
        cout<<" \n";
    }
	
}

void simetrica(int mat[MAX][MAX], int n1,int n2){
	int i,j;
	
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(mat[j][i]==mat[i][j]){
				printf("1 ");
			}
			else{
				printf("0 ");
				break;
			}
		}
	}
}


int main(){
	
	int x=1,n1,n2,i,j;
	int mtz[MAX][MAX];
	
	printf("Digite o numero de linhas da sua matriz: ");
	scanf("%i",&n1);
	printf("\nDigite o numero de que colunas da sua matriz: ");
	scanf("%i",&n2);
	printf("\nDigite os elementos da matriz: ");
	
	
	matriz(mtz,n1,n2);
	printf("\n");
	
	mostrar(mtz,n1,n2);
	
	printf("\n\nO minimo elemento dessa matriz e: %i \n\n",minimo(mtz,n1,n2));
	printf("A matriz transposta e:  \n");
	
	transposta(mtz,n1,n2);
	
	printf("\nSe a matriz for simetrica, so vai aparecer 1:  ");
	
	simetrica(mtz,n1,n2);
	
	
	return 0;
}
