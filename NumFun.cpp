#include <stdio.h>

int resto(int a, int b){
	return a%b;
}
int impar(int x){
	scanf("%i",&x);
	return resto(x,2)!=0;
}
int perfeito (int n){
	int i;
	int soma=0;
  for(i=1;i<=n;i++){
	if(n % i == 0){
	soma = soma++;
	 }
 }
 return soma;
}
int primo(int n){
	int i;
	int resultado =0;
	scanf("%i",&n);
 for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
       resultado++;
       break;
    }
 }
 return resultado;
}
 
int main(){
	
	int opcao,a,b,c;
	
	printf("O que voce quer descobrir ?\n");
	printf("1 - O resto a divisao, 2 - Impar ou par, 3 - Se for perfeito, 4 - Se for primo\n");
	scanf("%i",&opcao);
	printf("\n0 == Verdadeiro, 1 == Falso");
	
	if(opcao ==1){
		printf(" -- Digite o primeiro numero: ");
		scanf("%i",&a);
		printf("\t\t\t       Digite o segundo numero: ");
		scanf("%i",&b);
		
		printf("\t\t\t       O resto da divisao e: %i  \n", c = resto(a,b));
	}
	else if(opcao ==2){
		printf(" -- Digite um numero: ");
		a =impar(a);
		if(a==0){
			printf("\t\t\t       O numero e par.\n");
		}
		else{
			printf("\t\t\t       O numero e impar.\n");
		}
	}
	else if(opcao ==3){
		printf(" -- Digite um numero: ");
		scanf("%i",&a);
		a = perfeito(b);
		if(a==b){
			printf("\t\t\t       O numero e perfeito.\n");
		}
		else{
			printf("\t\t\t       O numero nao e perfeito.\n");
		}
		
	}
	else if(opcao ==4){
		printf(" -- Digite um numero: ");
		primo(a);
		if(a==0){
			printf("\t\t\t       O numero e primo.\n");
		}
		else{
			printf("\t\t\t       O numero nao e primo.\n");
		}
	}
	
	return 0;
}











