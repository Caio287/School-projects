#include <stdio.h>
#include <stdlib.h>

int main (){
	
	
	
	int i;
	system("color A");
	printf("Escreva um numero inteiro: ");
	scanf("%i",&i);
	
	for (int n=0;n<=i;n++){
		
		if (n%2==0){
			system ("color C");
			printf("%i\n",n);
			system ("color D");
		}
		else{
			system ("color B");
			printf("%i\n",n);
			system ("color E");
		}
		
		
	}
	system ("color A");
	
	
	
	system ("pause");
	return 0;
}
