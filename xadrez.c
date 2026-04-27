#include <stdio.h>

// =========================
// TORRE (recursivo)
// Move para a direita
// =========================
void moverTorre(int casas) {
    if (casas <= 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// =========================
// RAINHA (recursivo)
// Move para a esquerda
// =========================
void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =========================
// BISPO (recursivo + loops aninhados)
// Diagonal: cima + direita
// =========================
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {
        printf("Cima ");

        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {

    // =========================
    // TORRE
    // =========================
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // =========================
    // BISPO
    // =========================
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // =========================
    // RAINHA
    // =========================
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // =========================
    // CAVALO (loops complexos)
    // Movimento: 2 para cima + 1 para direita
    // =========================
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < 3; i++) {

        // Primeiros dois movimentos: Cima
        if (i < 2) {
            printf("Cima\n");
            continue; // volta pro loop
        }

        // Último movimento: Direita
        if (i == 2) {
            int j = 0;

            while (j < 1) {
                printf("Direita\n");
                break; // sai do loop interno
            }
        }
    }

    return 0;
}