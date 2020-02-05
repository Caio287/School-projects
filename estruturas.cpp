#include <stdio.h>
#include <math.h>

#define MAX 100

int main(){
	
	typedef struct pnt{
		float x;
		float y;
		float area;
		float tri;
	}ponto;
	
	ponto p1,p2;
	float dist,area;
	
	printf("Ecreva um ponto X Y em um grafico:  ");
	scanf("%f %f",&p1.x,&p1.y);
	printf("Ecreva outro pronto X Y em um grafico:  ");
	scanf("%f %f",&p2.x,&p2.y);
	
	dist = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2) );
	
	printf("\nA distancia dessa diagonal e igual a:  %1.1f",dist);
	
	area = fabs((p2.x-p1.x)*(p2.y-p1.y));
	
	printf("\nA area desse retangulo e igual a: %1.1f\n\n",area);
	
	
	
	
	
	return 0;
}
