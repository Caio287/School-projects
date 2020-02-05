#include <stdio.h>
int main()
{
   int valor,i;
do
{
 puts("Insira um valor para verificar os seus divisores: (insere 0 ou um valor negativo para terminar)");
 scanf("%d", &valor);

 printf("E devisor %d \n", valor);
 for (i = valor/2; i  > 0 ; i--)
 {
  if (valor%i==0)
  {
  printf("E devisor %d \n", i);
  }
 }

} while (valor > 0);  

puts("Foi dada ordem para terminar");
return 0;
}
