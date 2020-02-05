#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
	
	int x=1,n,i,n2=0,mani,ret=0;
	int ano[MAX],livros[MAX];
	char autor[MAX][30], titulo[MAX][30], area[MAX][20], limpar[MAX][30];
	
	printf("Voce tem 0 livros na sua biblioteca adicione algum\n");
	printf("Quantos livros voce quer adcionar a biblioteca ?  ");
	scanf("%i",&n);
	
	if(n<=0){
		printf("\nA quantidade de livros tem que ser maior que 0.");
		return 0;
	}
	
	livros[n] = n;
	
	printf("\nEm caso de nomes com espacos, insira um '-' \n");
	
	for(i=0;i<livros[n];i++){
		printf("\nDigite o nome do livro numero %i:  ",i+1);
		scanf(" %s",&titulo[i]);
		printf("\nDigite o nome do autor do livro %s:  ",titulo[i]);
		scanf(" %s",&autor[i]);
		printf("\nDigite a area do livro %s:  ",titulo[i]);
		scanf(" %s",&area[i]);
		printf("\nDigite em que ano o livro %s foi escrito:  ",titulo[i]);
		scanf("%i",&ano[i]);
	}
	
	escolhas:
	
	printf("\nAgora voce que tem uma biblioteca, o que desejas fazer ? \n");
	printf("1 - Adcionar mais livros || 2 - listar todos os livros || 3 - retirar livros da lista");
	printf("\nDigite aqui sua opcao: ");
	scanf("%i",&mani);
	
	if(mani == 1){
		
		printf("\nVoce tem %i livros. Digite a quantidade de que livros voce quer adcionar:  ",n);
		scanf("%i",&n2);
		
		n += n2;
		livros[n] = n;
		
		printf("\nEm caso de nomes com espacos, insira um '-' \n");
	
	
	// n+1 = 1
	
	for(i=n+1;i<livros[n]-ret;i++){
		printf("\nDigite o nome do livro numero %i:  ",i+1);
		scanf(" %s",&titulo[i]);
		printf("\nDigite o nome do autor do livro %s:  ",titulo[i]);
		scanf(" %s",&autor[i]);
		printf("\nDigite a area do livro %s:  ",titulo[i]);
		scanf(" %s",&area[i]);
		printf("\nDigite em que ano o livro %s foi escrito:  ",titulo[i]);
		scanf("%i",&ano[i]);
	}
		
		printf("\n\nLivros adcionados com exito");
		printf("\nAperte enter para ir a pagina de escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
	}else if(mani == 2){
		
		printf("\nBiblioteca ----------------------------- ");
		printf("\nVoce tem %i livros aqui ",n);
		for(i=0;i<livros[n]-ret;i++){
			printf("\n%i --- %s pelo autor %s feito no ano de %i para a aera de %s",i+1,titulo[i],autor[i],ano[i],area[i]);
		} 
		
		printf("\nAperte enter para ir a pagina de escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
	}else if(mani ==3){
		
		printf("Digite o numero do livro que voce quer retirar:  ");
		scanf("%i",&ret);
		
		livros[ret] = 0;
		
		printf("\n\nLivros retirados com exito");
		printf("\nAperte enter para ir a pagina de escolhas\n\n");
		system("pause");
		system("cls");
		goto escolhas;
		
	}
	
	
	return 0;
}
