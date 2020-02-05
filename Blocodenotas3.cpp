#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

long tambytes(FILE *file){
	if (file == NULL){
		return 0;
	}else{
		fseek(file,0,2);
		return ftell(file);
	}
}

int main(){
	
	FILE *file;
	char c[MAX];
	
	file = fopen("C:\\Users\\caioq\\desktop\\teste.txt","r");

	printf("\nO ficheiro tem %d bytes\n",tambytes(file));
	
	fclose(file);
	
	return 0;
}
