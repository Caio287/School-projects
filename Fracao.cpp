#include <stdio.h>
#include <math.h>

typedef struct frac{
	
	int denominador;
	int numerador;
	
}fracao;


int main(){
	
	fracao a,b;
	int mani,i;
	int aux,mmc;
	float soma,sub,div,multi;
	
	
	printf("Escreva a fracao(Numerador Denominador):  ");
	scanf("%i %i",&a.numerador,&b.denominador);
	
	printf("\n|| 1 -- Soma || 2 -- Subtracao || 3 -- Divisao || 4 Multiplicacao ||\n");
	printf("Digite o que voce deseja fazer com a fraccao:  ");
	scanf("%i",&mani);
	
	switch(mani){
		case 1: 
		
		printf("\nDigite outra fracao para a soma(Numerador Demominador):  ");
		scanf("%i %i",&b.numerador,&b.denominador);
		
		if(a.denominador == b.denominador ){	
		
		soma = (float)((a.numerador + b.numerador) / (a.denominador + b.denominador));
		
		printf("A soma dessas fracoes e:  %1.1f",soma);
		}
		else if(a.denominador != b.denominador){
			
			/*while(a.denominador !=1 && b.denominador !=1){
				if(a.denominador %2==0){
					a.denominador = a.denominador/2;
				}else{
					a.denominador = a.denominador/3;
				}
				if(b.denominador %2==0){
					b.denominador = b.denominador/2;
				}else{
					b.denominador = b.denominador/3;
				}
				
			}*/

    for (i = 2; i <= b.denominador; i++){
        aux = a.denominador * i;
        if ((aux % b.denominador) == 0) {
            mmc = aux;
            i = b.denominador + 1;
        }
    }
			soma = (float)((a.numerador + b.numerador ) / mmc);
			printf("A soma dessas fracoes e:  %1.1f",soma);
			
		}
	
		break;
		
		case 2: 
		
		printf("\nDigite outra fracao para a subtracao(Numerador Demominador):  ");
		scanf("%i %i",&b.numerador,&b.denominador);
		
		if(a.denominador == b.denominador){
			
			sub = (float)((a.numerador - b.numerador) / a.denominador);
			
			printf("A subtracao dessas fracoes e:  %1.1f",sub);
			
		}
		else if(a.denominador != b.denominador){
			
		for (i = 2; i <= b.denominador; i++) {
        aux = a.denominador * i;
        if ((aux % b.denominador) == 0) {
            mmc = aux;
            i = b.denominador + 1;
       }
      }
		
		sub = (float)(((mmc / a.denominador) * a.numerador) - ((mmc / b.denominador) * b.numerador));
		printf("A subtracao das fracoes e:  %1.1f",sub/mmc);
			 
		}
		
		break;
		
		case 3:
			
		printf("\nDigite outra fracao para a divisao(Numerador Demominador):  ");
		scanf("%i %i",&b.numerador,&b.denominador);
			
		div = (float)((a.numerador * b.denominador) / (a.denominador * b.numerador));
		
		printf("A subtracao das fracoes e:  %1.1f",div);
			
		break;
		
		case 4:
		
		printf("\nDigite outra fracao para a divisao(Numerador Demominador):  ");
		scanf("%i %i",&b.numerador,&b.denominador);
		
		multi = (float)((a.numerador * b.numerador) / (b.denominador * a.denominador));
		
		printf("A subtracao das fracoes e:  %1.1f",multi);
		
		break;
}
	
	
	
	
	return 0;
}
