#include <stdio.h>

int main() {
    // =======================
    // Movimento da TORRE
    // =======================
    // A Torre se move 5 casas para a direita.
    int movimentoTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n"); // Movimento horizontal para a direita
    }

    // =======================
    // Movimento do BISPO
    // =======================
    // O Bispo se move 5 casas na diagonal superior direita (Cima Direita).
    int movimentoBispo = 5;
    int j = 1;

    printf("\nMovimento do Bispo:\n");
    while (j <= movimentoBispo) {
        printf("Cima Direita\n"); // Movimento diagonal
        j++;
    }

    // =======================
    // Movimento da RAINHA
    // =======================
    // A Rainha se move 8 casas para a esquerda.
    int movimentoRainha = 8;
    int k = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Movimento horizontal para a esquerda
        k++;
    } while (k <= movimentoRainha);

    return 0;
}
