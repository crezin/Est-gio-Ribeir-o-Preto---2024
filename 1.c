#include <stdio.h>
int main() {
    int INDICE = 13, SOMA = 0, K = 0;
    do {
        K = K + 1;
        SOMA = SOMA + K;
    } while (K < INDICE);
    printf("SOMA: %d", SOMA);
    return 0;
}