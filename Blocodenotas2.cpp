#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	FILE *file;
	char c[100];
	
	file = fopen("C:\\Users\\caioq\\desktop\\teste.txt","w");
	if(file == NULL){
		printf("\nImpossivel abrir\n");
		return 0;
	}
	
	do{
		
		printf("Digite algo no bloco de notas ( . Termina):  ");
		gets(c);
		if(strcmp(c,".") != 0){
		fprintf(file,"\n - %s",c);
		}
		
	}while(strcmp(c,"."));
	
	fclose(file);
	printf("\n");
	
	file = fopen("C:\\Users\\caioq\\desktop\\teste.txt","r");
	if(file == NULL){
		printf("\nImpossivel abrir\n");
		return 0;
	}
	
	while(!feof(file)){
		
		fgets(c,100,file);
		printf(c);
		
	}
	
	fclose(file);
	
	return 0;
}
