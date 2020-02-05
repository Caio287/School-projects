#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

#define MAX 100

typedef struct si{
	
	int lugares[MAX][MAX];
	int pago[MAX][MAX];
	char nomes[MAX];
	
}home;

void inici(home salao[MAX][MAX]){
	
	int i,j;
	
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
	salao[i][j].nomes[0] = '0';
	salao[i][j].lugares[i][j] =  0;
	salao[i][j].pago[i][j] = 0;
	}
	}
}

void lerb(home salao[MAX][MAX], int f, int c){
	
	int i,j;
	printf("\nDigite 0 se o lugar estiver vazio e 1 se o lugar estiver ocupado");
	printf("\nDigite 0 se o lugar nao estiver pago e 1 se o lugar estiver pago ");
	printf("\nEm caso de espacos no nome, utilize \" - \" \n");
	
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			
			printf("\nStatus da cadeira na fileira: %i e na cadeira: %i:  ",i+1,j+1);
			scanf("%d",&salao[i][j].lugares[i][j]);
			if(salao[i][j].lugares[i][j] == 1){
			printf("Status de pagamento na fileira: %i e na cadeira: %i:  ",i+1,j+1);
			scanf("%d",&salao[i][j].pago[i][j]);
			printf("Nome do reservante na fileira: %i e na cadeira: %i:  ",i+1,j+1);
			scanf(" %s",salao[i][j].nomes[MAX]);
			}
		}
		
	}
	
}

int menu(){
	
	int mani;
	
	printf("\n\nAgora voce esta em controle do salao. O que desejas fazer ?");
	printf("\n 1 -- Criar uma nova reserva num lugar vago || 2 -- Eliminar uma reserva || 3 -- Mostrar o mapa da sala \n4 -- Mostrar a lista de resevas || 5 -- Avaliar o servico de atendimento || 6 -- Ver as avaliacoes ");
	printf("\nDigite aqui o numero do ticket:  ");
	scanf("%i",&mani);
	
	return mani;
	
}

void adicionar(home salao[MAX][MAX], int f, int c){
	
	int n,n2;
	
		printf("\nDigite o lugar que voce quer renovar a reserva (Fileira Cadeira):  ");
		scanf("%i %i",&n,&n2);
		
		n--; n2--;
		
		printf("Digite o status do lugar:  ");
		scanf("%i",&salao[n][n2].lugares);
		printf("Digite o status de pagamento:  ");
		scanf("%i",&salao[n][n2].pago);
		printf("Digite o nome do novo reservante:  ");
		scanf(" %s",salao[n][n2].nomes[MAX]);
	
}

void escreb(home salao[MAX][MAX], int f,int c){
	
	printf("\n");
	int i,j;
	for(i=0;i<f;i++){
        for(j=0;j<c;j++)
            cout<< salao[i][j].lugares[i][j];
        cout<<" \n";
    }
}

void retira(home salao[MAX][MAX], int f,int c){
	
	int i,j;
	printf("\n");
	
	salao[f][c].nomes[MAX] = '0';
	salao[f][c].lugares[f][c] = 0;
	salao[f][c].pago[f][c] = 0;
	
	printf("Reserva retirada com sucesso!");
	
}

int main(){
	
	int f,c,op;
	home salao[MAX][MAX];
	inici(salao);
	
	
	printf("Escreva a quantidade de fileiras:  ");
	scanf("%i",&f);
	printf("Escreva a quantidade de cadeiras:  ");
	scanf("%i",&c);
	
	lerb(salao,f,c);
	
	escolhas:
	op = menu();
	
	switch(op){
		
		case 1:
			
		adicionar(salao,f,c);
			
		break;
		
		case 2:
			
		retira(salao,f,c);
			
		break;
		
		case 3:
			
		escreb(salao,f,c);
			
		break;
		
	}
	
	goto escolhas;
	
	return 0;
	
}
