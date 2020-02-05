#include <stdio.h>

#define MAX 12

int n = MAX;
int i;

void mostra(int vet[]){
	printf("\n||\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12");
	printf("\n|| ");
	for(i=0;i<n;i++){
		printf("\t%d",vet[i]);
	}
}

int main(){
	
	int vet[n]={301,720,3,4,5,6,7,8,3429,0,11,12};
	mostra(vet);
	
	return 0;
}
