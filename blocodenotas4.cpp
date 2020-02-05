#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct s{
	
	char titulo[30];
	char autor[30];
	char area[20];
	int ano;
	
}biblio;

long tambytes(FILE *file){
	if (file == NULL){
		return 0;
	}else{
		fseek(file,0,2);
		return ftell(file);
	}
}

void lerb(biblio info[], int n){
	
	int i;
	for(i=0;i<n;i++){
		printf("Digite o nome do seu livro %i:  ",i+1);
		scanf(" %s",info[i].titulo);
		printf("Digite o autor do livro %s:  ",info[i].titulo);
		scanf(" %s",info[i].autor);
		printf("Digite a area do livro %s:  ",info[i].titulo);
		scanf(" %s",info[i].area);
		printf("Digite em que ano do livro %s:  ",info[i].titulo);
		scanf("%i",&info[i].ano);
		printf("\n");
	}
	
}

void escreb(biblio info[], int n){
	
	int i;
	
	for(i=0;i<n;i++){
		
		if(info[i].ano != 0){
		
		printf("O livro %i se chama %s da area de %s escrito pelo(a) %s e publicado no ano %i\n",i+1,info[i].titulo,info[i].area,info[i].autor,info[i].ano);
		
		}
		
	}
	
}

void adcionar(biblio info[], int n, int n2){
	
	int i;
	for(i=n;i<=n2;i++){
		printf("Digite o nome do seu livro:  ");
		scanf(" %s",info[i].titulo);
		printf("Digite o autor do livro %s:  ",info[i].titulo);
		scanf(" %s",info[i].autor);
		printf("Digite a area do livro %s:  ",info[i].titulo);
		scanf(" %s",info[i].area);
		printf("Digite em que ano do livro %s:  ",info[i].titulo);
		scanf("%i",&info[i].ano);
		printf("\n");
	}
}

int menu(){
	
	int mani;
	printf("\nAgora voce que tem uma biblioteca, o que desejas fazer ? \n");
	printf("|| 0 - Para sair do programa || 1 - Adcionar mais livros || 2 - listar todos os livros ||\n|| 3 - retirar livros da lista || 4 - Gravar em um bloco de notas || 5 - Ler biblioteca atual");
	printf("\nDigite aqui sua opcao: ");
	scanf("%i",&mani);
	return mani;
	
}

void retirar(biblio info[], int n2){
	
		n2--;
			
			info[n2].titulo[30] = '0';
			info[n2].autor[30] = '0';
			info[n2].ano = '0';
			info[n2].area[20] = '0';
			
}

void gravar(biblio info[], int n, FILE *file){
	
	int i;
	
	for(i=0;i<n;i++){
		
		if(info[i].ano != 48){
		fprintf(file,"\nO livro %i se chama %s da area de %s escrito pelo(a) %s e publicado no ano %i",i+1,info[i].titulo,info[i].area,info[i].autor,info[i].ano);
		}
	
	}

}

void lerg(biblio info[],int n, FILE *file){
	
	int i=0;
	char *c;
	
	while(!feof(file)){
		
		c = fgets(info[i].autor,30,file);
		printf("%s",c);
		i++;
		
	}
	
	printf("\n\n");
}

int main(){
	
	int i,n,mani,n2;
	biblio info[MAX];
	
	FILE *file;
	
	printf("Voce tem 0 livros na sua biblioteca adicione algum\n");
	printf("Quantos livros voce quer adcionar a biblioteca ?  ");
	scanf("%i",&n);
	
	printf("\n");
	lerb(info,n);
	
	escolhas: 
	mani = menu();
	printf("\n");	
		
	if(mani ==1){
		
		printf("Digite quantos livros voce quer adcionar:  ");
		scanf("%i",&n2);
		
		adcionar(info,n,n2);
		
		n = n+n2;
		
		system("pause");
		system("cls");
		
	}
	else if(mani ==2){
			
		
		escreb(info,n);
		printf("\n");
		
		system("pause");
		system("cls");
			
	}
	
	else if(mani ==3){
		
		printf("Digite o numero do livro que voce quer retirar:  ");
		scanf("%i",&n2);
		
		retirar(info,n2);
		
		system("pause");
		system("cls");
		
	}
	
	else if(mani ==4){
		
	file = fopen("C:\\Users\\caioq\\desktop\\biblioteca.txt","w");
	if(file == NULL){
		printf("\nImpossivel abrir o arquivo\n");
		return 0;
	}
		gravar(info,n,file);
		printf("Arquivo criado na area de trabalho com sucesso!\n");
		printf("O ficheiro tem %d bytes\n\n",tambytes(file));
		
		fclose(file);
		
		system("pause");
		system("cls");
		
	}
	
	else if(mani ==5){
		
	file = fopen("C:\\Users\\caioq\\desktop\\biblioteca.txt","r");
		if(file == NULL){
		printf("\nImpossivel abrir o arquivo\n");
		return 0;
	}
		lerg(info,n,file);
		
		fclose(file);
		
		system("pause");
		system("cls");
		
	}
	
	else if(mani ==0){
		goto fim;
	}

	goto escolhas;
	
	fim:
	
	return 0;
}
