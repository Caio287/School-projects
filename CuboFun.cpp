#include <stdio.h>

int pedir(int i){
	printf("Escreva um numero: ");
	scanf("%i",&i);
	return i;
}
int main (){
	int A,J;
	A = pedir(A);
	J = A*A*A;
	printf("\n%d\n",J);
	return 0;
}
