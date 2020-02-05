#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int Valor1, Valor2, Valor3, Maior, Maior2, Soma, Multi, Sub;
	
	printf("Digite 3 valores: \n");
	scanf("%i%i%i", &Valor1, &Valor2, &Valor3);
	
	if(Valor1>Valor2){
		Maior = Valor1;
	}
	else if(Valor2>Valor3){
		Maior = Valor2;
		Maior2 = Valor2;
	}
	else if(Valor3>Valor2){
		Maior = Valor3;
	}
	
	Soma = Valor1 + Valor2 + Valor3;
	Multi = Valor1 * Valor2 * Valor3;
	Sub = Maior - Maior2 - Valor1;
	
	printf("O maior valor dos 3 e: %i\n", Maior);
	printf("A soma desses valores e: %i\n", Soma);
	printf("A multiplicacao desse numero e: %i\n", Multi);
	printf("A Subtracao desses valores e: %i\n\n", Sub);
	
	
	
	
	
	
	system("pause");
	return 0;
}
