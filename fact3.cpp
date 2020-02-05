#include <stdio.h>

int nsmat(int n){
	if(n==1)
		return 1;
		
	return n+nsmat(n-1);
}

int main(){
	int x;
	printf("Escreva um numero:  ");
	scanf("%i",&x);
	
	printf("\n%i\n",nsmat(x));
	
	return 0;
}

