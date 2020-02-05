#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int num,mul,x;
	
	
	
	printf("\n\t\tDigite um numero: ");
	scanf("%i",&num);
	
mul=num;
	while (num<100){
		num = num+mul;
		printf("%i\n",num );
	}
	
	
	
	system ("pause");
	return 0;
}
