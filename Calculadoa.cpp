#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcao;
	float adicao, sub, menor, maior, A, B, multi, div;
	
	
	printf("\n\n\n\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||Bem vindo|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n\n\n");
	printf("Qual o peracao voce quer fazer ?\n1 - Adicao, 2 - Multiplicacao, 3 - Divisao, 4 - subtracao:");
	scanf("%i", &opcao);
	
	if(opcao ==1){
		printf("\n\tDigite o Primeiro valor:");
		scanf("%f", &A);
		printf("\n\tDigite o Segundo valor:");
		scanf("%f",&B);
		
		adicao = A+B;
		printf("\nA adicao dos numeros e igual a: %0.2f\n\n", adicao);
	}
	else if(opcao ==2){
		printf("\n\tDigite o Primeiro valor:");
		scanf("%f", &A);
		printf("\n\tDigite o Segundo valor:");
		scanf("%f",&B);
		
		multi = A*B;
		printf("\nA Multiplicacao dos numeros e igual a: %0.2f\n\n", multi);
	}
	else if(opcao ==3){
		printf("\n\tDigite o Primeiro valor:");
		scanf("%f", &A);
		printf("\n\tDigite o Segundo valor:");
		scanf("%f",&B);
		
		div = A/B;
		printf("\nA divisao dos numeros e igual a: %0.2f\n\n", div);
	}
	else if(opcao ==4){
		printf("\n\tDigite o Primeiro valor:");
		scanf("%f", &A);
		printf("\n\tDigite o Segundo valor:");
		scanf("%f",&B);
		
		
		sub = A - B;
		
		
		
		printf("\nA Subtracao dos numeros e igual a: %0.2f\n\n",sub);
	}
	
	
	
	
	
	system ("pause");
	return 0;
}
