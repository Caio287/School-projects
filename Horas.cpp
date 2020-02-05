#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	 
	float h,m,x,a;
	
	system ("color A");
	printf("Quantos minutos se passaram desde a meia noite? ");
	scanf("%f",&m);
	
	if(m<720){
		a=1;
	}
	else {
		a=2;
	}
	
	
	
	if(m >1440){
		printf("\n\nInsira um numero valido (0 - 1440)\n\n\n");
	}
	
	else if(m<=1400 & a==1) {
		h = m / 60;
	x = floor(h);
	printf("\n\nAgora sao: %1.0f Horas e %2.0f Minutos A.m  \n\n\n",h,x);
}
	
	
	else if(m<=1400 & a==2){
		h = (m / 60)-12;
	x = floor(h);
	
	
	printf("\n\nAgora sao: %1.0f Horas e %2.0f Minutos P.m \n\n\n",h,x);
	}
	

	
	system ("pause");
	return 0;
}
