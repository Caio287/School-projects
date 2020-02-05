#include <stdio.h>
#include <stdlib.h>

int main(){
	
	INICIO:
	
	int A,B,maior,menor,dnv;
	
	system("color A");
	
	printf("Digite o valor A: ");
	scanf("%i",&A);
	printf("\nDigite o valor B: ");
	scanf("%i",&B);
	
	printf("\nSe A>B: %i",A>B);
	printf("\nSe A<B: %i",A<B);
	printf("\nSe A>=B: %i",A>=B);
	printf("\nSe A<=B: %i",A<=B);
	printf("\nSe A==B: %i",A==B);
	printf("\nSe A!=B: %i\n\n",A!=B);
	
	printf("Deseja usa o programa novamente ? (1 Sim - 2 Nao) \n");
	scanf("%i",&dnv);
	
	if (dnv== 1){
		system("cls");
		goto INICIO;
	}
	else{
		goto FIM;
	}
	
	FIM:
	
	system("pause");
	return 0;
}
