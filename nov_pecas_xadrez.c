#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int movimentoVertical, int movimentoHorizontal) {
    if (movimentoVertical == 0)
        return;

    // Loop aninhado para representar a diagonal (Cima Direita)
    for (int h = 1; h <= movimentoHorizontal; h++) {
        printf("Cima Direita\n");
    }

    moverBispo(movimentoVertical - 1, movimentoHorizontal);
}

int main() {
    // =======================
    // Movimento da TORRE
    // =======================
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);

    // =======================
    // Movimento do BISPO
    // =======================
    int movimentoBispoVertical = 5;
    int movimentoBispoHorizontal = 1;
    printf("\nMovimento do Bispo:\n");
    moverBispo(movimentoBispoVertical, movimentoBispoHorizontal);

    // =======================
    // Movimento da RAINHA
    // =======================
    int movimentoRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentoRainha);

    // =======================
    // Movimento do CAVALO
    // =======================
    // Movimento em "L": 2 para cima, 1 para a direita
    printf("\nMovimento do Cavalo:\n");

    int i, j;
    int movimentos = 0;

    for (i = 2; i >= 1; i--) { // Duas casas para cima
        if (i == 1) {
            for (j = 1; j <= 1; j++) { // Uma casa para direita
                if (j == 1) {
                    printf("Direita\n");
                    break;
                }
            }
        }
        printf("Cima\n");

        if (i == 1 && movimentos >= 2) {
            continue;
        }

        movimentos++;
    }

    return 0;
}
