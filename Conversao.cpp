#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float cm, in, inc, kg, lbs, lbsc, l, gal, galc, c, f, fc;
	int o;
	
	inc = 0.39370;
	lbsc = 0.2064;
	galc = 0.26417;
	fc = 1.8;
	
	printf("\nO que voce quer converter ?\n");
	printf("1 - Cm to In, 2 - Kg to Lbs, 3 - L to Gal, 4 - C to F \n\n");
	scanf("%i", &o);
	
	if(o == 1){
		printf("Quantos CM voce quer converter para o In?\n");
		scanf("%f", &cm);
		
		in = cm * inc;
		
		printf("A conversao ficou: %f\n", in);
		
	}
 else if(o == 2){
		printf("Quantos Kg voce quer converter para Lbs?\n");
		scanf("%f", &kg);
		
		lbs = kg * lbsc;
		
		printf("A conversao ficou %f\n", lbs);
	}
	else if(o == 3){
		printf("Quantos L voce quer converter para Gal?\n");
		scanf("%f", &l);
		
		gal = l * galc;
		
		printf("A conversao ficou %f\n", gal);
	}
	else if(o == 4){
		printf("Quantos C voce quer converter para F?\n");
		scanf("%f", &c);
		
		f = c * fc + 32;
		
		printf("A conversao ficou %f\n", f);
	}
	
	
	
	
	
	system("pause");
	return 0;
}
