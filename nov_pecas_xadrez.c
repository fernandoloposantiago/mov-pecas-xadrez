#include <stdio.h>

int main() {
    // =======================
    // Movimento da TORRE
    // =======================
    int movimentoTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // =======================
    // Movimento do BISPO
    // =======================
    int movimentoBispo = 5;
    int j = 1;

    printf("\nMovimento do Bispo:\n");
    while (j <= movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // =======================
    // Movimento da RAINHA
    // =======================
    int movimentoRainha = 8;
    int k = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);

    // =======================
    // Movimento do CAVALO
    // =======================
    // Movimento: 2 casas para Baixo + 1 para a Esquerda (formando um "L")
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for) controla as duas casas para baixo
    for (int i = 1; i <= movimentoVertical; i++) {
        printf("Baixo\n"); // Movimento vertical
    }

    // Loop interno (while) para a casa à esquerda
    int l = 1;
    while (l <= movimentoHorizontal) {
        printf("Esquerda\n"); // Movimento horizontal
        l++;
    }

    return 0;
}
