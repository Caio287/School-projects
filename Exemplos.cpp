//
//  main.c
//  Ficha1Extra1
//
#define _CRT_SECURE_NO_WARNINGS
#define PI1 3.141592654//para ex. 3
#define PI2 3.14159// para ex. 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    {
        //Ex. 1a)
        /*char saudacao1[100], saudacao2[100], saudacao3[100];
         printf("\nOla a todos! Sou o C e espero que sejamos bons amigos.\n");
         printf("Escreva outra saudacao:\n”);
         gets_s(saudacao2);//ou gets
         printf("Escreva ainda outra saudacao:\n”);
         gets_s(saudacao3);
         printf("As saudacoes introduzidas foram\n%s\n%s\n", saudacao2, saudacao3);*/
        
        //Ex1b)
        /*int n1, n2, soma;
         printf("Introduza dois numeros inteiros: ");
         scanf("%d%d", &n1, &n2);
         soma = n1 + n2;
         printf("A soma vale %d\n", soma);*/
        
        //Ex 1c)
        /*int n1;
         printf("Introduza um numero inteiro: ");
         scanf("%d", &n1);
         printf("O n?mero È %d e o seguinte È %d\n", n1, n1+1);*/
        
        //Ex 1d)
        /*int n1, n2, soma, sub, prod, div;
         printf("Introduza dois numeros inteiros: ");
         scanf("%d%d", &n1, &n2);
         soma = n1 + n2;
         printf("A soma vale %d\n", soma);
         sub = n1 - n2;
         printf("A subtracao vale %d\n", sub);
         prod = n1 * n2;
         printf("O produto vale %d\n", prod);
         if (n2 != 0)
         {
         div = n1 / n2;
         printf("A divisao inteira vale %d\n", div);
         printf("A divisao real vale %.4f\n", n1*1.0 / n2);
         }
         else
         printf("N nao divide por 0!!\n");*/
        
        //Ex. 2
        /*printf("A memória de um int vale %d bytes\n", sizeof(int));
         printf("A memória de um float vale %d bytes\n", sizeof(float));
         printf("A memória de um double vale %d bytes\n", sizeof(double));
         printf("A memória de um char vale %d bytes\n", sizeof(char));*/
        
        //Ex. 3
        /*float raio, perimetro1, area1, perimetro2, area2;
         printf("Qual o valor do raio? ");
         scanf("%f", &raio);
         perimetro1 = 2 * PI1*raio;
         area1 = PI1*raio*raio;
         perimetro2 = 2 * PI2*raio;
         area2 = PI2*raio*raio;
         printf("Com 2 casas decimais:\n");
         printf("A ·rea1 È %.2f e o perimetro1 %.2f\n", area1, perimetro1);
         printf("A ·rea2 È %.2f e o perimetro2 %.2f\n", area2, perimetro2);
         printf("Com 4 casas decimais:\n");
         printf("A ·rea1 È %.4f e o perimetro1 %.4f\n", area1, perimetro1);
         printf("A ·rea2 È %.4f e o perimetro2 %.4f\n", area2, perimetro2);
         printf("Com 7 casas decimais:\n");
         printf("A ·rea1 È %.7f e o perimetro1 %.7f\n", area1, perimetro1);
         printf("A ·rea2 È %.7f e o perimetro2 %.7f\n", area2, perimetro2);*/
        
        //Ex 4
        /*int n1, n2;
         float f1, f2, f3;
         n1 = 33; n2 = 5; f1 = 33.0; f2 = 5.; f3 = 5.0;
         printf("%d\n",n1/n2);
         printf("%f\n",f1/n2);
         printf("%f\n",n1/f2);
         printf("%f\n",f1/f3);*/
        
        //Ex. 5a
        /*char c;
         printf("Digite caracter: ");
         c = getchar();
         printf("O caracter foi %c\n", c);
         printf("Digite caracter: ");
         scanf(" %c", &c); 
         printf("O caracter foi %c\n", c);*/
        
        //Ex. 5b,c
        /*char c1, c2;
         printf("Digite um caracter: ");
         scanf(" %c", &c1); 
         printf("Digite outro caracter: ");
         scanf(" %c", &c2);
         printf("\nOs caracteres introduzidos foram: %c %c\n", c1,c2);*/
        
        //Ex. 5d)
        /*char c;
         printf("Digite caracter: ");
         c = getchar();
         printf("O caracter foi %c e o código ASCII é %d\n", c, c);*/
        
        //Ex 5e)
        /*int n;
         char letra;
         do
         {
         printf("Insira inteiro em [0,255]: ");
         scanf("%d", &n);
         } while ((n < 0) || (n > 255));
         letra = n;
         printf("O caracter correspondente é %c\n", letra);*/
        
    // Ex. 6)
        /*int num = 2000;
        printf("Introduza um caracter: ");
        scanf(" %c", &num);
        printf("O valor de num = %d cujo caracter = ‘%c’\n", num, (char) num);*/
    // Ex. 7)
        char c1='S', c2='U';
        printf("Insira um número inteiro de 5 dígitos: ");
        scanf("%d", &c2);
        printf("O valor de c1 = '%c' e c2 = '%c'\n\n", c1, c2);
    }
    
}
