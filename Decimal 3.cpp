#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num;
	
	printf("\nEscreva um numero real:");
	scanf("%f", &num);
	
	printf("\nO seu numero limitado a 3 casas e: %1.2f  \n\n", num);
	
	system ("pause");
	return 0;	
}
