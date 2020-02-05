#include <stdio.h>
#include <string.h>

typedef struct str{
	char st[20];
}strin;

int main(){
	
	strin string;
	
	int i,j,n=0;
	char temp, st2[20];
	
	strcpy(string.st,"123456");
	
	while(string.st[n]!='\0'){
		st2[n]=string.st[n];
		n++;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(strcmp(string.st[i],string.st[j])<0){
				temp = string.st[i];
				string.st[i] = string.st[j];
				string.st[j] = temp;
			}
		}
	}
	
	return 0;
}
