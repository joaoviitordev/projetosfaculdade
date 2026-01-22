#include <stdio.h>

// Condicionais com matrizes e loops em C

int main () {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, addCount = 0;
    int target = 5;
    int found = 0;

    // Modificação Condicional da Matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < 5) {
                matriz[i][j] = -matriz[i][j];
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Contagem Codicional em uma Matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                evenCount++;
            } else {
                addCount++;
            }
        }
    }

    printf("Números de elementos pares: %d\n", evenCount);
    printf("Números de elementos ímpares: %d\n", addCount);

    // Substituição Condicional de Elementos de uma Matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 3 == 0) {
                matriz[i][j] = -1;
            } else {
                matriz[i][j] = 0;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Busca condicional em uma Matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d).\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break; // Para o loop externo não executar novamente  
    }
    
    if (!found) {
        printf("Elemento %d não encontrado.", target);
    }
    
    return 0;
}