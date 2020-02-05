#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x,y;
    char k;
    do{
    printf("Este Programa indica o quadrante no plano cartesiano\n");
    printf("Entre com o valor de x:");
    scanf("%f",&x);
    printf("Entre com o valor de y:");
    scanf("%f",&y);
    if((x>0)&&(y>0))
    printf("O Ponto P(%.2f,%.2f) pertence ao primeiro Quadrante\n",x,y);
    else
    {
      if((x<0)&&(y>0))
      printf("O Ponto P(%.2f.%.2f) pertence ao segundo Quadrante\n",x,y);
      else
      {
        if((x<0)&&(y<0))
        printf("O Ponto P(%.2f,%.2f) pertence ao terceiro Quadrante\n",x,y);
        else
        {
          if((x>0)&&(y<0))
          printf("O Ponto P(%.2f,%.2f) pertence ao quarto Quadrante\n",x,y);
          else
          {
            if((x==0)&&((y>0||y<0)))
            printf("O Ponto P(%.2f,%.2f) esta no eixo y\n",x,y);
            else
            {
              if((y==0)&&((x>0||x<0)))
              printf("O Ponto P(%.2f,%.2f) esta no eixo x\n",x,y);
              else
              {
                if((x==0)&&(y==0))
                printf("O Ponto P(%.2f,%.2f) esta na origem\n\n",x,y);
              }//fim do último else
            }//fim do penúltimo else
          }//fim do antepenúltimo else
        }//fim do terceiro else
      }//fim do segundo else
    }//fim do primeiro else 
    fflush(stdin);
    printf("\nDeseja digitar outro ponto. (S)/(N):\n");
    scanf("%c",&k);
    }while((k=='S')||(k=='s'));
system("Pause");
}//fim do Programa    
