#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int bxv,bx;
	
	bxv =0;
	
	printf("\nEm qual ano voce esta ? ");
	scanf("%i", &bx);
	
	
	if((bx%4==0 && bx%100!=0) || (bx%400==0)){
 		bxv =1;
	 }
	 
	if(bxv ==1){
		printf("\nVoce esta em um ano bissexto.\n\n");
	}
	else if(bxv==0){
		printf("\nVoce nao esta em um ano bissexto.\n\n");
	}
	
	
	
	system("pause");
	return 0;
}
