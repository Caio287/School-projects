#include <stdio.h>
#include <stdlib.h>

int inverte(int x)
{  
   int inv=0;
   do{
      inv=inv*10+(x%10);
      x=x/10;
      }while(x>0);
      return (inv);
}

int main(){
	
	system ("color A");
	
 int Num, NumInv, NumEnt,maior,menor,soma=0,i,resultado;
	
	printf("Entre com um numero inteiro: ");
	scanf("%i",&NumEnt);
	
	Num = NumEnt;
	NumInv = 0;
	maior = 0;
	
 do{
		
	NumInv = NumInv * 10;
	NumInv = NumInv + (Num % 10);
	
	Num = Num /10;
	
	if(NumInv>maior){
		maior=NumInv;
	}else{
		menor=NumInv;
	}
	
}while(Num > 0);

 printf("\nNumero Invertido %i\n", NumInv);
 
 Num=NumEnt;
 if (Num < 0){
		Num *= -1;
	}
		while (Num)
	{
		soma += Num%10;
		Num /= 10;
		
	}
 
 printf("A soma dos numero e: %i\n",soma);
 
 	if(inverte(NumEnt)==NumEnt){
                   printf("Capicua\n");
            }else
                    printf("Nao e capicua\n");
            
 printf("O maior numero e: %d \n",maior);
 printf("O menor numero e: %d \n",menor);
 
 resultado=0;
 for (i = 2; i <= NumEnt / 2; i++) {
    if (NumEnt % i == 0) {
       resultado++;
       break;
    }
 }
 if (resultado == 0)
    printf("%i E um numero primo\n", NumEnt);
 else
    printf("%i Nao e um numero primo\n\n", NumEnt);
 
 
	system("pause");
	return 0;
}
