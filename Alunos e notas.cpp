#include <stdio.h> 


struct ALUNO 
{
int MATRICULA;
char NOME[20]; //string de 20 posicoes
int NOTA[3], IDADE; .
};

void main ()
{
ALUNO VETOR [10]; //array pra guardar 10 alunos.
int y, POS;
POS=0; //não sei pra q serve isso.

/* funcao pra escrever o menu e receber a opcao. isso ai devia estar declarado antes de abrir o main() */
int MENU()
{
int x;
cout«"1"
cout«"2"
cout«"Escolha a opção"
cin»x;
return x;
}

//chama o menu
y=MENU();

{
while(y>0&&y<4) //fica em loop enqto ele estiver digitando um numero de 1 a 3.
if (y==1)
CADASTRO (VETOR,POS);
else if (y==2)
LOCALIZA (VETOR,POS);
else
EXCLUIR (VETOR, POS);
y=MENU(); //chama o menu de novo
}[/code]
