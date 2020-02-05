#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int A,x;
	
	A=1;
	
	while(A>0){
	
	printf("\n\tIntroduza um numero: ");
	scanf("%i", &A);
	
	

	if(A%2==0){
		printf("\n\tEsse numero e PAR\n");
	}
	else{
		printf("\n\tEsse numero e IMPAR\n");
	}
}
	printf("\n\tFim do programa\n\n");
	
	
	
	
	system ("pause");
	return 0;
}
