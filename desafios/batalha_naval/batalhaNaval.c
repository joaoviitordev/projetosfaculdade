#include <stdio.h>

int main () {
    // Inicialização das Variáveis    
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[2] = {3, 3};
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, navioVertical[0], 0, 0, 0, 0, 0, 0, 0}, // o 0 e 1 no "navioVertical" representam o seu determinado indíce!
        {0, 0, navioVertical[1], 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, navioHorizontal[0], navioHorizontal[1], navioHorizontal[2], 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  ");
    // Execução da coluna.
    for (int i = 0; i < 10; i++) {
        printf("   %c", coluna[i]);
    }

    printf("\n");
    // Execução das linhas juntamente ao tabuleiro em loop aninhado.
    for (int i = 0; i < 10; i++) {
        printf("%2d", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("   %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

   return 0;
}

