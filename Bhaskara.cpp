#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int A,B,C,raiz1,raiz2,x,result1;
	
	printf("\n\tIntroduza o Valor A:");
	scanf("%i",&A);
	printf("\n\tIntroduza o Valor B:");
	scanf("%i",&B);
	printf("\n\tIntroduza o Valor C:");
	scanf("%i",&C);
	
	x=B*B-4*A*C;
	
	if(x>0){
		raiz1 = (-B+sqrt(x))/(2*A);
		raiz2 = (-B-sqrt(x))/(2*A);
		printf("\n A primera raiz da formula e: %i, e a segunda e: %i\n\n ", raiz1, raiz2);
	}
	else if(x<0){
		printf("\n A formula nao tem raizes reais");
	}
	else if(x=0){
		raiz1 = -B+sqrt(x)/2*A;
		printf("As raizes da formula sao: %i", raiz1);
	}
	

	system ("pause");
	return 0;
}
