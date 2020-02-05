#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;

    printf("Entre os 2 numeros a serem processados: ");
    scanf("%i%i", &A, &B);
    
    if(A > B ){
    	printf("O Primeiro valor %i e maior \n", A);
    
	}
else if(B  > A){
	printf("O segundo valor %i e maior \n", B);
}
else if(A = B){
	printf("Os valores sao iguais");
}
    
system("pause");
    return 0;
}
