#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("color A");
	
	int i=1;
	
	while(i>0){
		printf("Introduza um numero (<0 Fim do Programa):\n ");
		scanf("%i",&i);
		if(i %2==0){
			puts("Esse numero e par. ");
			
		}
		else{
			puts("Esse numero e impar. ");
		}
		
		
	}
	if(i<0){
		printf("\nFim do progama\n\n");
	}
	
	
	
	system ("pause");
	return 0;
}
