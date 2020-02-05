#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i,j,n,x=1,mani=0,soma=0,controle,mudar;
	int notas[x];
	char nome[100][100];
	char c[100][100];
	
	system("color A");
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||Bem vindo|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
	
	printf("Quantos alunos voce tem: ");
	scanf("%i",&n);
	
		for(i=0;i<n;i++){
			printf("\nEscreva o primero nome do aluno %i: ",i+1);
			scanf(" %s",&nome[i]);
			printf("Escreva a nota do(a) %s: ",nome[i]);
			scanf("%i",&notas[i]);
			soma += notas[i];
		}
		
		system("cls");
		
		escolhas:
		
		printf("\nO que deseja fazer agora ? \n");
		printf("1 -- Calcular a media de todos os alunos \n2 -- Mudar a nota de algum aluno\n3 -- Mudar o nome de algum aluno\n4 -- \n");
		printf("\nDigite aqui: ");
		scanf("%i",&mani);
		
		switch (mani){
       case 1 :
    
    		printf("\nA media de todos os alunos e igual a: %i \n",soma/n);
    		printf("Gostaria de realizar outra operacao (1 - Sim | 2 - Nao): ");
    		scanf("%i",&controle);
    		if(controle ==1){
    			goto escolhas;
    			system ("cls");
			}
    		
    		break;
    
   	   case 2 :
    
    		printf("\nDigite o numero do aluno para mudar a sua nota: ");
    		scanf("%i",&mudar);
    		printf("\nDigite a nova nota: ");
    		scanf("%i",&j);
    		notas[mudar] = notas[j];
    		printf("\nNota mudada com sucesso, gostaria de ver todas denovo ? (1 - Sim | 2 - Nao): ");
    		scanf("%i",&controle);
    		if(controle == 1){
    			for(i=0;i<n;i++){
    				printf("\nA nota do aluno %s e igual a: %i",nome[i],notas[i]);
				}
			}
			printf("\nGostaria de realizar outra operacao (1 - Sim | 2 - Nao): ");
    		scanf("%i",&controle);
    		if(controle ==1){
    			goto escolhas;
    			system ("cls");
			}
			
			break;
    
   	   case 3 :
    	
    	printf("\nDigite o numero do aluno para mudar o seu nome: ");
    		scanf("%i",&mudar);
    		printf("\nDigite o seu novo nome: ");
    		scanf(" %s",&c[1]);
    		nome[mudar][100] = c[1][100];
    		printf("\nNome mudado com sucesso, gostaria de ver as notas e o nomes do alunos denovo ? (1 - Sim | 2 - Nao): ");
    		scanf("%i",&controle);
    		if(controle == 1){
    			for(i=0;i<n;i++){
    				printf("\nA nota do aluno %s e igual a: %i",nome[i],notas[i]);
				}
			}
			printf("\nGostaria de realizar outra operacao (1 - Sim | 2 - Nao): ");
    		scanf("%i",&controle);
    		if(controle ==1){
    			goto escolhas;
    			system ("cls");
			}
    
    	break;
    
 	   default :
  	  printf ("Numero invalido tente novamente \n");
  	  goto escolhas;
  	}
	
	system ("pause");
	return 0;
}
