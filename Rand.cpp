#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int num[5];
    int positivo = 0; // DEVE inicializar
    int negativo = 0; // DEVE inicializar

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        num[i] = (rand() % 21) + (-10);
        if (num[i] > 0) {
            positivo += 1;
        }
        else if (num[i] < 0 ) {
            negativo += 1;
        }
    }

    for (i = 0; i < 5; i++) {
        printf("[%d]: %d\n", i, num[i]);
    }

    printf("Positivo(s) : %d\n", positivo);
    printf("Negativo(s) : %d\n", negativo);

    return 0;
}
