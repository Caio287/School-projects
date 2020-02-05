#include<stdio.h>

int main(){

  int x=1,n2,matriz[x][x],i, j,n;
  
  printf ("\nDigite a quantidade de linhas da matriz: ");
  scanf("%i",&n);
  printf ("\nDigite a quantidade de colunas da matriz: ");
  scanf("%i",&n2);
  
  for ( i=0; i<n; i++ )
    for ( j=0; j<n2; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i+1, j+1);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  
  printf("\n\n******************* Saida de Dados ********************* \n\n");
  
  for ( i=0; i<n; i++ )
    for ( j=0; j<n2; j++ )
    {
      printf ("\nElemento[%d][%d] = %d\n", i+1, j+1,matriz[ i ][ j ]);
    }
  
  return(0);
}
