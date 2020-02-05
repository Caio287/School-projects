#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100

typedef struct nomeempresa{
	
	int matricula;
	char marca[MAX];
	char modelo[MAX];
	int dia,mes,ano;
	float custo;
	char tipov;
	
}veiculo;

typedef struct Nomeempresa{
	
	char tipo;
	int num;
	char condutor[MAX];
	float km;
	char gdescricao[MAX*10];
	int gdia,gmes,gano;
	char ghora[MAX];
	float gcusto;
	
}viagem;

/*

GASOLEO == 1.40 / L

CUSTO MANUTENCAO POR TIPO DE
VEICULO: A  0.1
		 B  0.2
		 C  0.3
		 D  0.4
		 E  0.6

*/

int lerveiculof(FILE *veiculof, veiculo info[]){
	
	INICIO:
	veiculof = fopen("C:\\Users\\caioq\\desktop\\veiculos.txt","r");
	if(veiculof == NULL){
		printf("\nImpossivel abrir o arquivo\n");
		getchar();
		goto INICIO;
	}
	
	int i=0;
	
	while(!feof(veiculof)){
		
		fscanf(veiculof, "%d %s %s %c %d %d %d %f", &info[i].matricula, &info[i].marca, &info[i].modelo, &info[i].tipov, &info[i].dia, &info[i].mes, &info[i].ano, &info[i].custo);
		// pode faltar algum dado nos %
		i++;
	}
	
	fclose(veiculof);
	
	return i;
	
	
}

int lerviagemf(FILE *viagemf, viagem info[]){
	
	INICIO2:
	viagemf = fopen("C:\\Users\\caioq\\desktop\\viagens.txt","r");
	if(viagemf == NULL){
		printf("\nImpossivel abrir\n");
		getchar();
		goto INICIO2;
	}
	
	int i=0;
	
	while(!feof(viagemf)){
		
		fscanf(viagemf, "\n%c %d %s %f %s %i %i %i %s %f",&info[i].tipo, &info[i].num, &info[i].condutor, &info[i].km, &info[i].gdescricao, &info[i].gdia, &info[i].gmes, &info[i].gano, &info[i].ghora, &info[i].gcusto);
		
		i++;
	}
	
	fclose(viagemf);
	
	return i;
	
}

int menu(){
	
	int mani;
	
	system("cls");
	printf("|| O que desejas fazer ?\n");
	printf("|| 1 - Vizualizar banco de dados || 2 - Atualizar dados de veiculos || 3 - Calcular viagens || 4 - Custos entre datas ||\n|| 5 - Criar novo ficheiro para viagens ||\n");
	printf("|| Escreva sua opcao aqui (0 para sair do programa):  ");
	scanf("%i",&mani);
	
	return mani;
}

void lerdados(veiculo info[],int n , viagem info2[], int n2){
	
	int i,j,mani,mani2,mani3;
	char c ='s' , c2 = 'S';
	
	do{
	printf("\n|| O que desejas vizualizar ?\n");
	printf("|| 1 - Informacoes dos veiculos || 2 - Informacoes da viagem ||\n");
	printf("|| Escreva sua opcao aqui (0 para sair do programa):  ");
	scanf("%i",&mani);
	
	if(mani == 0){
		printf("\nPrograma finalizado com sucesso, aperte enter para sair!\n\n");
		system("pause");
		system("cls");
		exit (EXIT_FAILURE);
	}
	else if(mani == 1){
		printf("\n|| Existe(m) %i veiculos na sua empresa \n|| Deseja 1 - vizualizar algum especifico ou 2 - listar todos os veiculos ?  ",n+1);
		scanf("%i",&mani2);
		switch(mani2){
			case 1:
			printf("|| Qual o numero do veiculo que voce deseja vizualizar ?  ");
			scanf("%i",&mani3);
			mani3--;
			printf("\n|| Dados do veliculo n%i \n",mani3+1);
			printf("|| Matricula: %d ",info[mani3].matricula);
			printf("\n|| Marca: %s ",info[mani3].marca);
			printf("\n|| Modelo:  %s",info[mani3].modelo);
			printf("\n|| Data de aquisicao:  %i/%i/%i ",info[mani3].dia,info[mani3].mes,info[mani3].ano);
			printf("\n|| Tipo:  %c",info[mani3].tipov);
			printf("\n|| Custo:  %7.2f\n\n",info[mani3].custo);
			break;
			
			case 2:
			for(i=0;i<n;i++){
			if(info[i].matricula != NULL){
			printf("\n|| Dados do veliculo n%i \n",i+1);
			printf("|| Matricula: %d ",info[i].matricula);
			printf("\n|| Marca: %s ",info[i].marca);
			printf("\n|| Modelo:  %s",info[i].modelo);
			printf("\n|| Data de aquisicao:  %i/%i/%i ",info[i].dia,info[i].mes,info[i].ano);
			printf("\n|| Tipo:  %c",info[i].tipov);
			printf("\n|| Custo:  %7.2f\n\n",info[i].custo);
				}
			}
			break;
		}
	}
	else if(mani == 2){
		printf("\n|| Existe(m) %i viahens feitas na sua empresa \n|| Deseja 1 - vizualizar uma viagem especifica ou 2 - listar todos as viagens ?  ",n2+1);
		scanf("%i",&mani2);
		switch(mani2){
			case 1:
			printf("|| Qual a da viagem que voce deseja vizualizar ?  ");
			scanf("%i",&mani3);
			mani3--;
			printf("\n|| Dados do veliculo n%i \n",mani3+1);
			printf("|| Numero da viagem: %d ",info2[mani3].num);
			printf("\n|| Tipo de veiculo da viagem: %c",info2[mani3].tipo);
			printf("\n|| Nome do condutor: %s ",info2[mani3].condutor);
			printf("\n|| Kilometros rodados:  %d",info2[mani3].km);
			printf("\n|| Gastos --");
			printf("\n|| Descricao do gasto:  %s ",info2[mani3].gdescricao);
			printf("\n|| Data do gasto:  %i/%i/%i ",info2[mani3].gdia,info2[mani3].gmes,info2[mani3].gano);
			printf("\n|| Hora do gasto:  %s ",info2[mani3].ghora);
			printf("\n|| Custo:  %7.2f \n\n",info2[mani3].gcusto);
			break;
			case 2:
			for(i=0;i<n2;i++){
			if(info2[i].num != NULL){
			printf("\n|| Dados da viagem n%i ",i+1);
			printf("\n|| Numero da viagem: %d ",info2[i].num);
			printf("\n|| Tipo de veiculo da viagem: %c",info2[i].tipo);
			printf("\n|| Nome do condutor: %s ",info2[i].condutor);
			printf("\n|| Kilometros rodados:  %4.2f",info2[i].km);
			printf("\n|| Gastos --");
			printf("\n|| Descricao do gasto:  %s ",info2[i].gdescricao);
			printf("\n|| Data do gasto:  %i/%i/%i ",info2[i].gdia,info2[i].gmes,info2[i].gano);
			printf("\n|| Hora do gasto:  %s ",info2[i].ghora);
			printf("\n|| Custo:  %7.2f \n\n",info2[i].gcusto);
				}
			}
			break;
		}
	}
	
	printf("\n|| Deseja atualizar saber mais alguma informacao (s/n)?  ");
	scanf(" %c",&c);
	system("cls");
}while(c == 's' || c== 'S');
	
	printf("\n\n");
	system("pause");
}

int mudardadosv(veiculo info[], int n, FILE *veiculof){
	
	// veiculof = fopen("C:\\Users\\caioq\\desktop\\veiculos.txt","r");
	
	int i,j,mani,mani2,mani3=0;
	char c,c2 = 's';
	do{
	system("cls");
	printf("|| 1 - Matricula || 2 - Marca || 3 - Modelo || 4 - Data da aquisicao || 5 - Custo || 6 - Tipo || 7 - Remover veiculo || 8 - Adcionar veiculo ||\n");
	printf("|| Escreva sua opcao aqui (0 para sair do programa):  ");
	scanf("%i",&mani2);
	if(mani2!=8){
	printf("\n|| Digite o numero do seu veiculo para atualizar suas informacoes:  ");
	scanf("%i",&mani);
	mani--;
	}
	
	if(mani2 == 0){
		printf("\nPrograma finalizado com sucesso, aperte enter para sair!\n\n");
		system("pause");
		system("cls");
		exit (EXIT_FAILURE);
	}
	else if(mani2 == 1){
		printf("\n|| A sua matricula atual desse veiculo e: %i ",info[mani].matricula);
		printf("\n|| Digite a nova matricula:  ");
		scanf("%i",&info[mani].matricula);
	}
	else if(mani2 == 2){
		printf("\n|| A marca atual desse veiculo e: %s ",info[mani].marca);
		printf("\n|| Digite a nova marca:  ");
		scanf(" %s",info[mani].marca);
	}
	else if(mani2 == 3){
		printf("\n|| O modelo atual desse veiculo e: %s ",info[mani].modelo);
		printf("\n|| Digite o novo modelo:  ");
		scanf(" %s",info[mani].modelo);
	}
	else if(mani2 == 4){
		
		nov:
		printf("\n|| A data de aquisicao atual do seu veiculo e: %i/%i/%i ",info[mani].dia,info[mani].mes,info[mani].ano);
		printf("\n|| Digite a nova data de aquisicao (DD/MM/YYYY):  ");
		scanf("%i/%i/%i", &info[mani].dia,&info[mani].mes,&info[mani].ano);
		
		if(info[mani].dia > 31 || info[mani].dia < 0 || info[mani].mes > 12 || info[mani].mes < 0 || info[mani].ano < 0){
			printf("\n|| DATA INVALIDA TENTE NOVAMENTE ||");
			goto nov;
		}
		
	}
	else if(mani2 == 5){
		printf("\n|| O custo atual desse veiculo e: %7.2f ",info[mani].custo);
		printf("\n|| Digite o novo custo:  ");
		scanf("%f",&info[mani].custo);
	}
	else if(mani2 == 6){
		
		nov2:
		printf("\n|| O tipo atual desse veiculo e: %c ",info[mani].tipov);
		printf("\n|| Digite o novo tipo:  ");
		scanf(" %c",&info[mani].tipov);
		
	}
	else if(mani2 == 7){
		printf("\n|| O veiculo atual e o: %i ",mani+1);
		printf("\n|| Deseja remover todos os seus dados (s/n):  ");
		scanf(" %c",&c);
		if(c == 's' || c == 'S'){
			info[mani].matricula = 0;
			info[mani].marca[1] = NULL;
			info[mani].modelo[1] = NULL;
			info[mani].tipov = '0';
			info[mani].dia = 0;
			info[mani].mes = 0;
			info[mani].ano = 0;
			info[mani].custo = 0.0;
		}
	}
	else if(mani2==8){
		printf("\n|| Digite a quantidade de veiculos que voce quer adcionar:  ");
		scanf("%i",&mani3);
		for(i=n;i<=mani3;i++){
			printf("\n|| Digite a matricula do veiculo %i:  ",i+1);
			scanf("%i",&info[i].matricula);
			printf("\n|| Digite a marca do veiculo %i:  ",i+1);
			scanf(" %s",info[i].marca);
			printf("\n|| Digite o modelo do veiculo %i:  ",i+1);
			scanf(" %s",info[i].modelo);
			printf("\n|| Digite o tipo do veiculo %i:  ",i+1);
			scanf(" %c",info[i].tipov);
			printf("\n|| Digite a data de aquisicao do veiculo %i (DD/MM/YYYY):  ",i+1);
			scanf("%i/%i/%i",&info[i].dia,&info[i].mes,&info[i].ano);
			printf("\n|| Digite o custo do veiculo %f:  ",i+1);
			scanf("%f",&info[i].custo);
		}
	}
	
	printf("\n|| Deseja atualizar mais alguma informacao (s/n)?  ");
	scanf(" %c",&c2);
	}while(c2 == 's' || c2 == 'S' );
		
	printf("\n\n");
	system("pause");
	return mani3;
	
}

void custosviagem(viagem info[], int n){
	
	int i,j,mani;
	float custototal=0;
	float acusto=0,bcusto=0,ccusto=0,dcusto=0,ecusto=0;
	int avig=0, bvig=0, cvig=0, dvig=0, evig=0;
	char a ='A',b = 'B',c = 'C',d = 'D',e = 'E', c2='s';
	
	for(i=0;i<n;i++){
		custototal += info[i].gcusto;
		if(a == info[i].tipo){
			acusto+=info[i].gcusto;
			avig++;
		}
		else if(b == info[i].tipo){
			bcusto+=info[i].gcusto;
			bvig++;
		}
		else if(c == info[i].tipo){
			ccusto+=info[i].gcusto;
			cvig++;
		}
		else if(d == info[i].tipo){
			dcusto+=info[i].gcusto;
			dvig++;
		}
		else if(e == info[i].tipo){
			ecusto+=info[i].gcusto;
			evig++;
		}
	}
	
	printf("\n|| O valor total de custos nas viagens das tropas foi: %f ",custototal);
	printf("\n|| Voce deseja ver os custos para cada tipo de veiculo (s/n) ?  ");
	scanf(" %c",&c2);
	if(c2 == 's' || c2 == 'S'){
		printf("\n\nO Tipo A gastou: %.2f em um total de %i viagens",acusto,avig);
		printf("\nO Tipo B gastou: %.2f em um total de %i viagens",bcusto,bvig);
		printf("\nO Tipo C gastou: %.2f em um total de %i viagens",ccusto,cvig);
		printf("\nO Tipo D gastou: %.2f em um total de %i viagens",dcusto,dvig);
		printf("\nO Tipo E gastou: %.2f em um total de %i viagens",ecusto,evig);
	}
	
	printf("\n\n");
	system("pause");
}

void custodata(viagem info[],int n){
	
	int i,j,mani;
	int dia2,mes2,ano2,dia,mes,ano;
	int restodias;
	int a;
	
	nov3:
	printf("\n|| Insira a primeira data(DD/MM/YYYY):  ");
	scanf("%i/%i/%i)",&dia, &mes, &ano);
	if(dia > 31 || dia < 0 || mes > 12 || mes < 0 || ano < 0){
			printf("\n|| DATA INVALIDA TENTE NOVAMENTE ||");
			goto nov3;
		}
	nov4:
	printf("\n|| Insira a segunda data(DD/MM/YYYY):  ");
	scanf("%i/%i/%i",&dia2, &mes2, &ano2);
	if(dia2 > 31 || dia2 < 0 || mes2 > 12 || mes2 < 0 || ano2 < 0){
			printf("\n|| DATA INVALIDA TENTE NOVAMENTE ||");
			goto nov4;
		}
		
	
	
	// dia mes ano  --  12 05 2019  -- 02*100000 05*1000 2019
	//                                 02052019  052019 2019
	//                                 02052019
	
	
	printf("\n\n");
	system("pause");
}

void criararquivo(viagem info[], int n, FILE *viagemn){
	
	INICIO3:
	viagemn = fopen("C:\\Users\\caioq\\desktop\\novaviagem.txt","a");
	if(viagemn == NULL){
		printf("\nImpossivel abrir\n");
		getchar();
		goto INICIO3;
	}
	
	int i=0,n2,mani;
	
		printf("\n|| Digite quantas viagens voce quer registrar:  ");
		scanf("%i",&n2);
		
		for(i=n;i<=n2;i++){
			printf("\n|| Dados da viagem n%i \n",i+1);
			printf("|| Numero da viagem:  ");
			scanf("%d",&info[i].num);
			printf("|| Tipo de veiculo da viagem:  ");
			scanf(" %c",&info[i].tipo);
			printf("|| Nome do condutor:  ");
			scanf(" %s",&info[i].condutor);
			printf("|| Kilometros rodados:  ");
			scanf("%f",&info[i].km);
			printf("|| Gastos --");
			printf("\n|| Descricao do gasto:  ");
			scanf(" %s",&info[i].gdescricao);
			printf("|| Data do gasto(DD MM YYYY):  ");
			scanf("%i %i %i",&info[i].gdia, &info[i].gmes, &info[i].gano);
			printf("|| Hora do gasto:  ");
			scanf(" %s",&info[i].ghora);
			printf("|| Custo:  ");
			scanf("%f",&info[i].gcusto);
			
			fprintf(viagemn, "\n%c %d %s %f %s %i %i %i %s %f",&info[i].tipo, &info[i].num, &info[i].condutor, &info[i].km, &info[i].gdescricao, &info[i].gdia, &info[i].gmes, &info[i].gano, &info[i].ghora, &info[i].gcusto);
		}
	
	fclose(viagemn);
	printf("\n\n");
	system("pause");
}

int main(){
	
	FILE *veiculof;
	FILE *viagemf;
	FILE *viagemn;
	veiculo info[MAX];
	viagem info2[MAX];
	
	int n,n2,mani;
	
	n = lerveiculof(veiculof,info);
	n2 = lerviagemf(viagemf,info2);
	
	printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||BEM VINDO|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");
	printf("- Seus dados foram lidos Aperte enter para continuar -\n\n");
	system("pause");
	system("cls");
	
	do{
	mani = menu();
	
	if(mani == 0){
		printf("\nPrograma finalizado com sucesso, aperte enter para sair!\n\n");
		system("pause");
		system("cls");
		return 0;
	}
	
	else if(mani == 1){
		
		lerdados(info,n,info2,n2);
		
	}
	
	else if(mani == 2){
		
		n  = n + mudardadosv(info,n,veiculof);
		
	}
	
	else if(mani == 3){
		
		custosviagem(info2,n2);
		
	}
	
	else if(mani == 4){
		
		custodata(info2,n2);
		
	}
	
	else if(mani ==5 ){
		
		criararquivo(info2,n,viagemn);
		
	}
	
	}while(mani != 0);
	
	return 0;
}
