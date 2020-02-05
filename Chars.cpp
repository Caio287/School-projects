#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char car,num;
	
	printf("\nEscreva um caracter:");
	scanf("%c", &car);
	
	if(car>= 'A' && car <='Z'){
		printf("\nA letra e maiuscula\n");
	}
	
	else if(car>= 'a' && car <= 'z'){
		printf("\nA letra e minuscula\n\n");
	}
	else if(car>= '0' && car <= '9'){
		printf("\nE um numero inteiro\n\n");
	}
	else if(car = ';', ':', '.',','){
		printf("\nIsto e um caracter, de pontuacao\n\n");
	}
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
