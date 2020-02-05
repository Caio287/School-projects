#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,i;
	
	printf("||Calculos de potencia||\n");
	printf("Digite o numero a em que a^b\n");
	scanf("%i",&a);
	printf("Digite o numero b em que a^b\n");
	scanf("%i",&b);
	
	i = pow(a,b);
	
	printf("O resultado e igual a: %i\n",i);
	
	
	return 0;
}
