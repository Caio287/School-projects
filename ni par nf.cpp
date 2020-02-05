#include <stdio.h>
#include <stdlib.h>

int main(){
	system("color A");
	int i,x;
	
	printf("Introduza o primeiro valor: ");
	scanf("%i",&i);
	printf("\nIntroduza o segundo valor: ");
	scanf("%i",&x);
	puts("Os valores pares dentro desses numeros sao: ");
	
	while(i<x){
		if(i%2==0){
		printf("%i\n\n",i);
	}
	i++;
	
	}

	
	
	
	
	system("pause");
	return 0;
}
