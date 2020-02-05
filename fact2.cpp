#include <stdio.h>

float potencia(float x, int n){
	//n>0;4
	if(n==0) 
		return 1;
	
	return n*potencia(x,n-1);
}

int main(){
	
	float x;
	int n;
	
	printf("Escreva um numero:  ");
	scanf("%f",&x);
	printf("Escreva um numero:  ");
	scanf("%i",&n);
	
	
	printf("\n%f\n",potencia(x,n));
	
	return 0;
}

