#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int A,B,i1,i2;
	
	printf("\n\tDigite o valor A: ");
	scanf("%i", &A);
	printf("\n\tdigite o valor B: ");
	scanf("%i", &B);
	
	i1 = A%B;
	i2 = B%A;
	
	if(i1 == 0&i2 ==0){
		printf("\nA e multiplo de B.");
		printf("\nB e multiplo de A.\n\n");
	}	
	else if (i1 == 0 & i2>0 || i2<0){
		printf("\nA e multiplo de B mas B nao e multiplo de A.\n\n");
		
	}
	else if(i1<0||i1>0 & i2==0){
		printf("\nB e multiplo de A mas A nao e multiplo de B.\n\n");
	}
	else if(i1<0||i1>0 & i2<0 || i2>0){
		printf("\nNenhum desses numeros sao multiplos do outro.\n\n");
	}
	
	system ("pause");
	return 0;
}
