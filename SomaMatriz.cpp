#include <stdio.h>
#include <stdlib.h>

int main(){

definir:

  int x=1,i,j;
  int n,n2,n3,n4;
  int controle=0;
  int matriz[x][x],matriz2[x][x],matriz3[x][x];
  int k1,k2,temp;
  
  printf ("\nDigite a quantidade de linhas da matriz 1: ");
  scanf("%i",&n);
  printf ("\nDigite a quantidade de colunas da matriz 1: ");
  scanf("%i",&n2);
  
  printf("\nInsira os elementos das matriz 1: \n\n");
  
  for ( i=0; i<n; i++ )
    for ( j=0; j<n2; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i+1, j+1);
      scanf ("%i", &matriz[ i ][ j ]);
    }
    
  printf ("\nDigite a quantidade de linhas da matriz 2: ");
  scanf("%i",&n3);
  printf ("\nDigite a quantidade de colunas da matriz 2: ");
  scanf("%i",&n4);
  
  printf("\nInsira os elementos das matriz 2: \n\n");
  
  for ( i=0; i<n3; i++ )
    for ( j=0; j<n4; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i+1, j+1);
      scanf ("%i", &matriz2[ i ][ j ]);
    }
    
    system("cls");
    
  printf("\nVoce quer ver suas matrizes ? (1 - Sim | 2 - Nao): ");
  scanf("%i",&controle);
  
	if(controle ==1){
  
  printf("\n\n******************* Elementos da matriz 1 ********************* \n\n");
  
  for ( i=0; i<n; i++ )
    for ( j=0; j<n2; j++ )
    {
      printf ("\nElemento[%d][%d] = %i\n", i+1, j+1,matriz[ i ][ j ]);
    }
  
  printf("\n\n******************* Elementos da matriz 2 ********************* \n\n");
  
  for ( i=0; i<n3; i++ )
    for ( j=0; j<n4; j++ )
    {
      printf ("\nElemento[%d][%d] = %i\n", i+1, j+1,matriz2[ i ][ j ]);
    }
}
    
	printf("\nVoce quer fazer a multiplicacao das duas matrizes ? (1 - Sim | 2 - Nao): ");
	scanf("%i",&controle);
	
	if(controle == 1){
		
		// [ 1 2 ] * [ 5 6 ] = [1*5 + 2*7] = [5 14]
		// [ 3 4 ]   [ 7 8 ]   [3*6 + 4*8]   [18 32]
		
		if(n2 != n4){
			printf("\nA operacao e invalida pois as linhas da matriz A e as colunas da matriz B nao sao iguais.");
			printf("\nVoce quer tentar novamente ? (1 - Sim | 2 - Nao): ");
			scanf("%i",&controle);
			if(controle ==1){
				system("cls");
				goto definir;
			}else{
				system("cls");
				goto fim;
			}
		}
		
		
	 for(k1=0;k1<n;k1++)
    {
        for(k2=0;k2<n4;k2++)
        {
            temp=0;
            for(i=0;i<n2;i++)
            {
                temp=temp+matriz[k1][i]*matriz2[i][k2];
            }
            matriz3[k1][k2]=temp;
        }
    }
    
    for ( i=0; i<n; i++ )
    for ( j=0; j<n4; j++ ){
    	
      printf ("\nElemento[%d][%d] = %i\n", i+1, j+1,matriz3[ i ][ j ]);
      
    }
    
}

fim:
	printf("\n\n******************* Fim do programa ********************* \n\n");

    
    
  return(0);
}
