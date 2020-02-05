#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void desenha(){
	printf(".\n");
	printf("..\n");
	printf("...\n");
	printf("....\n");
	printf(".....\n");
	printf("......\n");
	printf(".......\n");
	printf("........\n");
	printf(".........\n");
}

int main(){
	
	int frames=0;
	
	loop:
	system("cls");
	
	desenha();
	
	frames++;
	goto loop;
	
	return 0;
}
