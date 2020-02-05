#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sized;
	int sized2,pow;
	
	printf("Tipo, tamanho e limites de dados:\n");
	printf("Tamanho de Bytes de um char: %f \n"), sized;
	printf("Tamanho de Bytes de um slot: %f \n"), sized2;
	printf("Para um short int, o valor minimo: %f, o valor minimo = %d\n", (int)(pow(2.0, (int)(sized2*8))))/2, (int)(pow(2.0,(int)(sized2*8))/2);
	
	system("pause");
	return 0;
}
