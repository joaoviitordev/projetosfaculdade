#include <stdio.h>

// Movimentação de peças de xadrez

int main () {
    char rainha;
    char bispo;
    char torre;
    char cavalo;
    int escolha;
    int mover = 0;
    
    printf("Movimentando peças de xadrez!\n");
    printf("Escolha qual peça movimentar:\n");
    printf("1 - Rainha!\n");
    printf("2 - Torre!\n");
    printf("3 - Bispo!\n");
    printf("4 - Cavalo!\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Você escolheu Rainha!\n");
        printf("Rainha vai se movimentar 8 vezes para esquerda.\n");

        // Movimentação da rainha usando for
        for (mover = 0; mover <= 7; mover ++) {
            printf("Rainha se moveu para Esquerda!\n");
        }
    } else if (escolha == 2) {
        printf("Você escolheu Torre!\n");
        printf("Torre vai se movimentar 5 vezes para a direita!\n");
        // Movimentação da torre usando while
        while (mover <= 4) {
            printf("Torre se moveu para direita!\n");
            mover ++;
        }
    } else if (escolha == 3) {
        printf("Você escolheu Bispo!\n");
        printf("Bispo vai se movimentar 5 vezes para cima e direita!\n");

        // Movimentação do bispo usando do while
        do {
            printf("Bispo se moveu para cima, direita!\n");
            mover ++;
        } while (mover <= 4);
    } else if (escolha == 4) {
        printf("Você escolheu Cavalo!\n");
        printf("Cavalo vai se movimentar 2 vezes para baixo e 1 vez para esquerda!\n");
        
        // Movimentação do cavalo (loop aninhado)
        for (mover = 0; mover <= 1; mover ++) {
            while (mover <= 1) {
                printf("Cavalo se moveu para para baixo\n");
                mover ++;
            }
            printf("Cavalo se moveu para esquerda!\n");
        }
    }

    return 0;
}