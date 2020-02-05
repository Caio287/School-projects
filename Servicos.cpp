#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade,cartao, cds,ddv;
	char nome [20];
	
	printf("\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||Bem vindo|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
	printf("Qual o seu nome?");
	scanf("%s", &nome);
	printf("Quantos anos voce tem?");
	scanf("%i", &idade);
	printf("Qual o numero do seu cartao de credito?");
	scanf("%i", &cartao);
	printf("E sua data de validade?");
	scanf("%i", &ddv);
	printf("E o codigo de seguranca?");
	scanf("%i", &cds);
	
	printf("\n\nBom dia senhor %s. Voce tem %i anos!\n\n",nome, idade);
	printf("Obrigado pelas informacoes!!!\n\n\n");
	
	
	system("pause");
	return 0;
}
