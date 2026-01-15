#include <stdio.h>

// Arrays e Matrizes com Loops
// Arrays (Vetores) e Matrizes são estruturas de dados que armazenam múltiplos valores do mesmo tipo.
// Arrays são unidimensionais, enquanto Matrizes são bidimensionais (ou mais).

int main() {

    // Arrays (Vetores)

    int vetor[5]; // Declaração de um vetor de 5 inteiros
 
    /* Inicialização do vetor usando uma estrutura de repetição for
       Exibindo os elementos do vetor usando uma estrutura de repetição for */

    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // Atribuindo valores ao vetor
        printf("vetor[%d] = %d\n", i, vetor[i]); // Exibindo os valores do vetor
    }
 
    // Matrizes (Arrays Bidimensionais)

    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros
 
    // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j; // Atribuindo valores à matriz
        }
    }
 
    // Exibindo os elementos da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
 
    return 0;
}