#include <stdio.h>

main(){


int i=1,n;
float notas[i] = {0};

float total = 0;

float media = 0;




printf("Insira o numero de parcelas: ");
scanf("%d",&n);


	for(i=0;i<n;i++){
		scanf("%f",&notas);
}

	for(i=0;i<n;i++){
		total += notas[i];
}


	printf("\ntotal = %f\n",total);
	media = total/n;
	printf("\nA media e: %f\n",media);



return 0;

}
