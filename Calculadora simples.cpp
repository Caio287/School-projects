#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int A,B,Soma,Sub,Multi,Div,Maior,Menor;
	
	printf("Digite dois valores\n");
	scanf("%i%i", &A, &B);
	
	if(A > B){
		Maior = A;
		Menor = B;
	}
	else{
	Maior = B;
	Menor = A;
	}
	
	Soma = A + B;
	Sub = Maior - Menor;
	Multi = A * B;
	Div = Maior / B;
	
	
	printf("A soma desses valores e: %i \n", Soma);
	printf("A Subtracao desses valores e: %i \n", Sub);
	printf("A Multiplicacao e: %i \n", Multi);
	printf("A Divisao desses valores e: %i \n\n", Div);
	
	
	
	system ("pause");
	return 0;
}
