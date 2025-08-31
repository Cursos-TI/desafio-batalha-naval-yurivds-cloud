#include <stdio.h>

#define TAM 10   // tamanho do tabuleiro 10x10

int main() {
    int tabuleiro[TAM][TAM] = {0};  // inicializa o tabuleiro com 0

    // --- Definição manual dos navios ---
    // Navio vertical (3 posições)
    int navioVerticalX = 2; // coluna (fixa)
    int navioVerticalY = 4; // linha inicial
    int tamanhoVertical = 3;

    // Navio horizontal (4 posições)
    int navioHorizontalX = 6; // linha (fixa)
    int navioHorizontalY = 1; // coluna inicial
    int tamanhoHorizontal = 4;

    printf("=== BATALHA NAVAL - NIVEL NOVATO ===\n\n");

    // Posiciona navio vertical no tabuleiro e exibe coordenadas
    printf("Navio Vertical (tamanho %d):\n", tamanhoVertical);
    for (int i = 0; i < tamanhoVertical; i++) {
        tabuleiro[navioVerticalY + i][navioVerticalX] = 1;
        printf("  Coordenada: (%d, %d)\n", navioVerticalY + i, navioVerticalX);
    }
    printf("\n");

    // Posiciona navio horizontal no tabuleiro e exibe coordenadas
    printf("Navio Horizontal (tamanho %d):\n", tamanhoHorizontal);
    for (int j = 0; j < tamanhoHorizontal; j++) {
        tabuleiro[navioHorizontalX][navioHorizontalY + j] = 1;
        printf("  Coordenada: (%d, %d)\n", navioHorizontalX, navioHorizontalY + j);
    }
    printf("\n");

    // Exibe tabuleiro (opcional, só para visualização)
    printf("Tabuleiro (1 = parte de navio, 0 = vazio):\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}