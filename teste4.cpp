#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct estudante{
		
		char nome[100];
		int numero;
		float nota;
		
	}aluno;
	
void lerturma(aluno turma[], int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("Digite o numero do aluno %i:  ",i+1);
		scanf("%i",&turma[i].numero);
		printf("Digite o nome do aluno %i:  ",i+1);
		scanf(" %s",turma[i].nome);
		printf("Digite a nota do aluno %i:  ",i+1);
		scanf("%f",&turma[i].nota);
		printf("\n");
	}
	
}

void escreve(aluno turma[],int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("O numero do(a) %s e: %i e sua nota e: %1.1f \n",turma[i].nome,turma[i].numero,turma[i].nota);
	}
}

void pedealuno(aluno turma[], int n, int al){
	
	int i;
	for(i=0;i<n;i++){
		if(turma[i].numero == al){
			
			printf("O aluno %i se chama %s e tirou %1.1f\n",turma[i].numero , turma[i].nome,turma[i].nota);
			
			break;
		}
	}
}

int main(){
	
	aluno turma[MAX];
	
	int n,i,al;
	
	printf("Digite a quantidade de alunos que voce tem:  ");
	scanf("%i",&n);
	printf("\n");
	
	lerturma(turma,n);
	
	FILE *file;
	file = fopen("C:\\Users\\caioq\\desktop\\teste.txt","w");
	for(int i =0;i<n;i++){
		fprintf(file,"O numero do(a) %s e: %i e sua nota e: %1.1f \n",turma[i].nome,turma[i].numero,turma[i].nota);
	}
	fclose(file);
	
	system("cls");
	printf("Digite o numero do aluno que voce quer pesquisar:  ");
	scanf("%i",&al);
	printf("\n");
	
	pedealuno(turma,n,al);
	
	
	
	return 0;
}
