#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

#define MAX 100

int main(){
	
	int f,c,n,n2,n3,i,j,mani,rest=0;
	int lugares[MAX][MAX],pago[MAX][MAX],av[MAX]{0};
	char nomes[MAX][MAX],cliente[MAX][MAX];
	int cc=0;
	
	while(cc=0){
		if(cc!=0){
			
		for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			
			lugares[i][j] == 0;

			}
		}
	}
			
		}
	
	
	printf("Digite o numero de filas que o seu salao tem:  ");
	scanf("%i",&f);
	if(f<=0){
		return 0;
	}
	printf("Digite o numero de cadeiras que o seu salao tem:  ");
	scanf("%i",&c);
	if(c<=0){
		return 0;
	}
	
	printf("\nDigite 0 se o lugar estiver vazio e 1 se o lugar estiver ocupado");
	printf("\nDigite 0 se o lugar nao estiver pago e 1 se o lugar estiver pago ");
	printf("\nEm caso de espacos no nome, utilize \" - \" \n");
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			
			printf("\nStatus da cadeira na fileira: %i e na cadeira: %i:  ",i+1,j+1);
			scanf("%d",&lugares[i][j]);
			if(lugares[i][j]==1){
			printf("Status de pagamento na fileira: %i e na cadeira: %i:  ",i+1,j+1);
			scanf("%d",&pago[i][j]);
			printf("Nome do reservante na fileira: %i e na cadeira: %i:  ",i+1,j+1);
			scanf(" %s",&nomes[i]);

			}
		}
	}
	
	// 2 2 = 4, 3 3 = 9, 2 3 = 6
	
	escolhas:
	
	printf("\n\nAgora voce esta em controle do salao. O que desejas fazer ?");
	printf("\n 1 -- Criar uma nova reserva num lugar vago || 2 -- Eliminar uma reserva || 3 -- Mostrar o mapa da sala \n4 -- Mostrar a lista de resevas || 5 -- Avaliar o servico de atendimento || 6 -- Ver as avaliacoes ");
	printf("\nDigite aqui o numero do ticket:  ");
	scanf("%i",&mani);
	
	switch(mani){
		
		case 1: 
		
		printf("\nDigite o lugar que voce quer renovar a reserva (Fileira Cadeira):  ");
		scanf("%i %i",&n2,&n3);
		lugares[n2-1][n3-1] = 1;
		printf("Digite o status de pagamento:  ");
		scanf("%i",&pago[n2-1][n3-1]);
		printf("Digite o nome do novo reservante:  ");
		scanf(" %s",&nomes[n2-1][100]);
		
		printf("\n\nNovo nome reservado com sucesso!");
		printf("\nAperte enter para voltar as escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
		break;
		
		case 2:
		
		printf("\nDigite o numero da reserva que voce quer remover (Fileira Cadeira):  ");
		scanf("%i %i",&n2,&n3);
		
		lugares[n2-1][n3-1] = 0;
		pago[n2-1][n3-1] = 0;
		nomes[n2-1][MAX] = 0;
		
		printf("\n\nReserva retirada com sucesso!");
		printf("\nAperte enter para voltar as escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
		break;
		
		case 3:
			
		printf("\n");
		
	for(i=0;i<f;i++){
        for(j=0;j<c;j++)
            cout<< lugares[i][j];
        cout<<" \n";
    }
			
		printf("\n\nSala criada com sucesso!");
		printf("\nAperte enter para voltar as escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
		break;
		
		case 4:
			
		printf("\nAperte enter para ver todas as reservas\n");
		system("pause");
		for(i=0;i<f;i++){
			for(j=0;j<c;j++){
				if(lugares[i][j]==1 && pago[i][j]==1){
				printf("\nA cadeira %i da fileira %i esta reservado e pago pelo(a) %s ",j+1,i+1,nomes[i]);
			}
			if(lugares[i][j]==1 && pago[i][j]==0){
				printf("\nA cadeira %i da fileira %i esta reservado e nao esta pago pelo(a) %s ",j+1,i+1,nomes[i]);
			}
			if(lugares[i][j]==0){
				printf("\nA cadeira %i da fileira %i nao esta reservado ",j+1,i+1 );
			}
			}
		}
		
		printf("\n\nListagem feita com sucesso!");
		printf("\nAperte enter para voltar as escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
		break;
		
		case 5:
			
			//  3 3 == 3 3 *** *** ***
			
		printf("\nDigite o numero da sua cadeira:  ");
		scanf("%i",&n2);
		printf("Digite o numero da sua fileira:  ");
		scanf("%i",&n3);
		
		printf("\nDigite a sua avaliacao (De 1 a 5):  ");
		scanf("%i",&av[n2*n3]);
		
			
		printf("\n\nAvaliacao feita com sucesso!");
		printf("\nAperte enter para voltar as escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
			
		break;
		
		case 6:
			
		printf("\n");
			
			for(i=0;i<100;i++){
				if(av[i] != 0 ){
					printf("A avaliacao de numero %i foi:  %i",i,av[i]);
				}
			}
			
			
			
		printf("\n\n\nListagem feita com sucesso!");
		printf("\nAperte enter para voltar as escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
			
		break;
		
		default :
  	  printf ("Numero invalido tente novamente \n");
  	  system("pause");
  	  goto escolhas;
		
	}
	
	return 0;
}
