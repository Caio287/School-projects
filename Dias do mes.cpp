#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int dias, mes, rest, bx, ano,bxv,dnv;

	bxv =0;
	
	INICIO:
	
	system("Color A");
	
	printf ("\nQual mes voce esta (1 - 12): ");
 	scanf(" %i", &mes);
 	
 	if(mes>12){
 		printf("\n\tData invalida\n\n");
 		goto FIM;
	 }
 	
 	printf("\nQual o dia que voce esta (1 - 31): ");
 	scanf(" %i", &dias);
 	
 	if(dias>31){
 		printf("\n\tData invalida\n\n");
 		goto FIM;
	 }
 	
 	printf("\nEm qual o ano voce esta ? ");
 	scanf(" %i", &bx);
 	
 	if(bx<=0){
 		printf("\n\tData invalida\n\n");
 		goto FIM;
	 }
 	
 	
 	if((bx%4==0 && bx%100!=0) || (bx%400==0)){
 		bxv =1;
	 }
 	
 	
 	if(mes == 1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
 		rest = 31 - dias;
 		printf("\nFalta %i dias para acabar o mes.\n\n\n", rest);
	 }
	 
	 else if(mes == 4||mes==6||mes==9||mes==11){
	 	rest = 30 - dias;
	 	printf("\nFalta %i dias para acabar o mes.\n\n\n", rest);
	 }
	 
	 else if(dias>29){
 		printf("\n\tData invalida\n\n");
 		goto FIM;
	 }
	 
	 	else if(bxv ==1 & mes ==2){
	 			rest = 29 - dias;
					printf("\nFalta %i dias para acabar o mes.\n\n\n", rest);
		 }
		 
	 else if (mes == 2){
 		rest = 28 - dias;
 		printf("\nFalta %i dias para acabar o mes.\n\n\n",rest);
	 }
	 
	printf("Deseja usa o programa novamente ? (1 Sim - 2 Nao) \n");
	scanf("%i",&dnv);
	
	if (dnv== 1){
		system("cls");
		goto INICIO;
	}
	else{
		goto FIM;
	}
 	
	
	
	FIM:
	
	system ("pause");
	return 0;
}
