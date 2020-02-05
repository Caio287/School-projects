#include <stdio.h>

long fact(int n){
//	n>0;
	if(n==0||n==1){
		return 1;
	}
	return n*fact(n-1);
}

int main(){
	
	int x;
	printf("Escreva um numero:  ");
	scanf("%i",&x);
	
	printf("\n%i\n",fact(x));
	
	return 0;
}
