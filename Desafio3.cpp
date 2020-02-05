#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,hr2=0;
	float entrada,saida,hr;
	
	system("color A");
	printf("-ESSE ESTACIONAMENTO COBRA:   1H = 2 EUR   ||   2HS = 3 EUR   ||   2HS> = +10 EUR-\n");
	printf("\nQue horas voce estacionou ? (Horas . Minutos): ");
	scanf("%f",&entrada);
	printf("Que horas voce saiu do parque ? (Horas . Minutos): ");
	scanf("%f",&saida);
	
	hr = saida - entrada;
	
	if(hr>0 && hr<=1.30){
		printf("\nVoce deve pagar 2 EUR por ficar %2.2f Horas. \n",hr);
	}
	else if(hr>1.30 && hr<=2.30){
		printf("\nVoce deve pagar 3 EUR por ficar %2.2f Horas.\n ",hr);
	}
	else if(hr>2.30){
		
		hr2 =3;
		
		for(i=0;i<=hr;i++){
			hr2 = hr2+10;
		}
		
		printf("\nVoce deve pagar: %i por ficar %2.2f Horas.\n ", hr2-10,hr);
		
	}
	
	
	return 0;
}
