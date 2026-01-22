#include <stdio.h>
#define TAM 10

/* 3 = navios | 0 = água */

int main () {
    // Inicialização das Variáveis    
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[2] = {3, 3};
    int tabuleiro[TAM][TAM] = {0};
    
    // Preenchendo diagonal principal (0,0) até (1,1)
    for (int i = 0; i < 2; i++) {
        tabuleiro[i][i] = 3;
    }
    
    // Preenchendo diagonal secundária (0,9), (1,8) e (2,7)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][TAM - 1 - i] = 3;
    }
    
    // Colocando navio vertical na coluna 2, linhas 2-3
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;
    
    // Colocando navio horizontal na linha 7, colunas 4-6
    tabuleiro[7][4] = 3;
    tabuleiro[7][5] = 3;
    tabuleiro[7][6] = 3;

    printf("            TABULEIRO BATALHA NAVAL\n");
    printf("  ");
    // Execução da coluna.
    for (int i = 0; i < 10; i++) {
        printf("   %c", coluna[i]);
    }

    printf("\n");
    // Execução das linhas juntamente ao tabuleiro em loop aninhado.
    for (int i = 0; i < TAM; i++) {
        printf("%2d", linha[i]);
        for (int j = 0; j < TAM; j++) {
            printf("   %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

   return 0;
}

