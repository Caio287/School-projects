#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int Idade1, Idade2, Idade3;
	char Nome1[20], Nome2[20], Nome3[20];
	float Media, Soma;
	
	printf("\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||Bem vindo|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
	printf("Qual o seu nome? E sua idade?\n");
	scanf("%s%i", Nome1, &Idade1);
	printf("Qual o nome do seu pai ? E a idade dele?\n");
	scanf("%s%i", Nome2, &Idade2);
	printf("Qual o nome da sua mae? E a idade dela?\n");
	scanf("%s%i", Nome3, &Idade3);
	
	Soma = Idade1 + Idade2 + Idade3;
	Media = Soma / 3;
	
	printf("\nA soma de suas idades e igual a: %f\n", Soma);
	printf("A media de suas idades e igual a: %f\n\n", Media);
	
	
	system("pause");
	return 0;
}
