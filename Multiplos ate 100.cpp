#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num,mul,x;
	
	mul=0;
	
	printf("\n\tDigite um numero: ");
	scanf("%i",&num);
	
	for(mul==0;mul<=100;mul++){
		x=num%mul;
		printf("%i", x);
	}
	
	
	
	system ("pause");
	return 0;
}
