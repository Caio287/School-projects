#include <stdio.h>

long fibo(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
		
	return fibo(n-1)+fibo(n-2);
}

int main(){
	int x;
	printf("Escreva um numero:  ");
	scanf("%i",&x);
	
	printf("\n%i\n",fibo(x));
	
	return 0;
}
