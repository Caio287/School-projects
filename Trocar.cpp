#include <stdio.h>

void trocar(int a,int b){
	int aux;
	
	aux =a;
	a=b;
	b=aux;
	
	printf("A primeira variavel trocada e: %i e a segunda trocada e: %i \n\n",a,b);
	
}

int main(){
	
	int a,b;
	
	printf("Escreva o seu primeiro numero:  ");
	scanf("%i",&a);
	printf("Escreva o seu segundo numero:  ");
	scanf("%i",&b);
	printf("\n");
	
	trocar(a,b);
	
	return 0;
}
