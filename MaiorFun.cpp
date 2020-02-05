#include <stdio.h>

int verificar(int a, int b){
	
	int maior;
	
	if(a>b){
		maior = a;
		return maior;
	}else{
		maior = b;
		return maior;
	}
	
}

int main(){
	
	int a,b,maior;
	
	printf("Escreva o primero numero: ");
	scanf("%i",&a);
	printf("Escreva o segundo numero: ");
	scanf("%i",&b);
	
	maior = verificar(a,b);
	
	printf("\nO maior valor de acordo com a funcao e: %i \n",maior);
	
	return 0;
}
