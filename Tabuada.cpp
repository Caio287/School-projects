#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tabuada = 0,x;
    printf("\nDigite a tabuada que voce deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);

    for( x = 1; x<=10;x++){
        
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }
	
	for(x=1;x<=10;++x){
		 	
	}
	
	system ("pause");
	return 0;
}
