#include <stdio.h>

// Define serve para criar um tamanho padrão para as matrizes e também funciona nos loops

#define LINHAS 3
#define COLUNAS 3

// Vetores, Matrizes e Loops em C

int main () {

    int matriz [LINHAS][COLUNAS];
    int soma = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++){
            soma ++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}