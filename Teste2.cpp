#include<stdio.h>

int analise(int n, int chave, int *t) {
int i = 0;
while (t[i] != chave && i <= n-1)
i++;
if(i > n-1)
return -1;
else
return i;
}

int main(){
	
	int i=5,c=1,t[5]{1,2,3,4,5};
	
	
	printf("%i\n\n",analise(i,c,t));
	
	return 0;
}
