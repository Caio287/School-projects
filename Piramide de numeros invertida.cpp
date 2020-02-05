#include <stdio.h>

int maxn(int argc, char *argv[])
{
    int num;
    int x, h;

    printf ("Digite o numero: ");
    scanf  ("%d", &num);

    for ( x = num; x >= 1; x--) {
        for ( h = x; h >= 1; h--) {
            printf ("%d ", h);
        }
        printf ("\n");
    }

    
    return 0;
}
