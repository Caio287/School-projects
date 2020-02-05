#include <stdio.h>
#include <stdlib.h>

int main (){
	
	system ("color A");
	inicio:
	int i=0,x=0,contador=0,opcao;
	
	printf("\nIntroduza um numero: ");
	 scanf("%i",&i);
	 system ("cls");
	
	while(i>=0 & i<=100){
	
	 tentativa: 
	system ("color A");
	 printf("\nTente advinhar o numero proposto: ");
	 scanf("%i",&x);
	 
	 contador++;
	 
	 if(x<0 || x>100){
	 	system ("color C");
	 	printf("\nNumero invalido, tente novamente com numeros de 0 a 100.\n");
	 	goto tentativa;
	 }
	 
	 if(i>x){
	 	system ("color C");
	 	 printf("\nO numero %i e menor que o proposto\n",x);
	 	 
	 	 goto tentativa;
	 }
	 else if(i<x){
	 	system ("color C");
	 	printf("\nO numero %i e maior que o proposto\n",x);
	 	
	 	goto tentativa;
	 }
	 else if(i=x){
	 	printf("\nO introduzindo foi: %i e o numero %i e igual que o proposto\n", i,x);
	 	printf("\nVoce tentou: %i vezes a achar o numero proposto\n",contador);
	 	
	 	goto fim;
	 }
	 
	
}
	if(i<0 || i>100){
		system ("color C");
	 	printf("\nNumero invalido, tente novamente com numeros de 0 a 100.\n");
	 	system ("color A");
	 	goto inicio;
	}
	
	fim:
		
		printf("Voce quer jogar denovo ? (0 Sim - 1 Nao): ");
		scanf("%i",&opcao);
		if(opcao ==0){
			system ("cls");
			goto inicio;
		}
		
	
	system ("pause");
	return 0;
}
