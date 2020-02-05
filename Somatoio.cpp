#include <stdio.h>
   
   
    int main(void)
    {
        int n, somatorio = 0, i;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
            somatorio = somatorio + i * (i + 1);
        printf("%d\n", somatorio);
        
       return 0;
   }
