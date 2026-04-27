#include <stdio.h>

int main() {

    // =========================
    // TORRE (usando FOR)
    // Move 5 casas para a direita
    // =========================
    printf("Movimento da Torre:\n");

    for (int i = 0; i < 5; i++) {
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

    // =========================
    // CAVALO (loops aninhados)
    // Move em "L": 2 para baixo + 1 para a esquerda
    // =========================
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        // Após o segundo movimento para baixo,
        // executa o movimento lateral
        if (i == 1) {
            int l = 0;
            while (l < 1) {
                printf("Esquerda\n");
                l++;
            }
        }
    }

    return 0;
}