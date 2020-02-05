#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float money, product, change, MN, PB;
	
	printf("\nQuanto custa o produto?\n");
	scanf("%f", &product);
	
	printf("Quando de dinheiro voce tem?\n");
	scanf("%f",&money);
	
	if(product>money){
	
	MN=product-money;
	printf("Voce precisa de %f para comprar esse produto \n", MN);
	
	}
	else if("money>product"){
		change=money-product;
		PB=money/product;
		printf("O seu troco e: %f\n", change);
		
		
	}
	printf("Voce pode comprar: %f produtos\n", PB);
	

	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
