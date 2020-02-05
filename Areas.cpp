#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	
	float ladoa, ladob, raio, Area, Perimetro;
	float PI;
	int opcao;
	
	PI = 13,14;
	
	printf("\nQual figura voce quer saber a area e o perimetro?\n");
	printf("Quadrado 1, Retangulo 2, Circulo 3\n\n");
	scanf("%i", &opcao);
	
	
	
	if(opcao == 1){
		printf("Qual o lado do quadrado?\n");
		scanf("%f", &ladoa);
		
		Area = ladoa * ladoa;
		Perimetro = ladoa *4;
		
		printf("Area do quadrado: %f\n", Area);
		printf("O Perimetro do quadrado e: %f\n\n\n", Perimetro);
		
		
	}

	else if(opcao ==2){
		printf("Qual a base do retangulo ?\n");
		scanf("%f", &ladoa);
		printf("Qual a altura do retangulo ?\n");
		scanf("%f", &ladob);
		
		Area = ladoa * ladob;
		Perimetro = (ladoa * 2) + (ladob * 2);
		
		printf("A area do retangulo e: %f\n", Area);
		printf("O perimetro do retangulo e: %f\n\n\n", Perimetro);
	}
	
	else if(opcao == 3){
		printf("Qual o raio da circurferencia ?\n");
		scanf("%f", &raio);
		
		Perimetro = 2 * PI * raio;
		Area = PI * raio;
		
		printf("Area do circulo e: %f\n", Area);
		printf("O Perimetro do circulo e: %f\n\n\n", Perimetro);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
