#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcao;
	
	printf("\n\tO atleta ficou em qual posicao no podium ? (1 - Infinito) ");
	scanf("%i", &opcao);
	
	if(opcao == 1){
		printf("\n\nO atleta ficou em Primeiro e recebeu medalha de ouro.\n\n");
	}
	else if(opcao == 2){
		printf("\n\nO atleta ficou em segundo e recebeu medalha de prata.\n\n");
	}
	else if(opcao ==3){
		printf("\n\nO atleta ficou em terceiro e recebeu medalha de bronza.\n\n");
	}
	else if(opcao >3){
		printf("\n\nO atleta nao recebeu medalhas no podium e ficou na posicao: %i.\n\n",opcao);
	}
	
	
	
	
	system ("pause");
	return 0;
}
