#include <stdio.h>
#include <stdlib.h>
 
int main(){
  int y=0, g=0, c=0, x=0, z=0, e=0, n=0, d=0;
  
  printf("Digite um ano para saber a data da pascoa: ");
  scanf("%d", &y);
  
  g =(y%19)+1;
  c =(y/100)+1;
  x =((3*c)/4)-12;
  z =(((8*c)+5)/25)-5;
  e =((11*g) + 20 + z - x)%30;
  
    if ((e == 25 && g > 11) || (e == 24)){
           e++;
    }
  
  n =(44-e);
    if (n<21){
       n = n+30;  
    }
  
  d =((5*y)/4)-(x+10);
  n =(n+7)-((d+n)%7);
  
   if(n>31){
         printf("\nPascoa: %d de abril de %d\n", (n-31), y);
    }
    else{
         printf("\nPascoa: %d de marco de %d\n", n, y);
    }
    
   int ano = y;
    
  if (ano%100 == 0){
     ano = ano/100;
  }
  
  if(ano%4 == 0){
       printf("\nE bissexto\n");
  }
  else {
       printf("\nNao e bissexto\n");  
  }       
 	
	 system ("pause");
  	 return 0;
}
