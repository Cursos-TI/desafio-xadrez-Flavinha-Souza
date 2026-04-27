#include <stdio.h>

int main() {

    // =========================
    // TORRE (usando FOR)
    // Move 5 casas para a direita
    // =========================
    printf("Movimento da Torre:\n");

    int i;
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO (usando WHILE)
    // Move 5 casas na diagonal (cima + direita)
    // =========================
    printf("\nMovimento do Bispo:\n");

    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // =========================
    // RAINHA (usando DO-WHILE)
    // Move 8 casas para a esquerda
    // =========================
    printf("\nMovimento da Rainha:\n");

    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}