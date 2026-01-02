#include <stdio.h>

// Movimentação de peças de xadrez

int main () {
    char rainha;
    char bispo;
    char torre;
    int escolha;
    int mover = 0;
    
    printf("Movimentando peças de xadrez!\n");
    printf("Escolha qual peça movimentar:\n");
    printf("1 - Rainha!\n");
    printf("2 - Torre!\n");
    printf("3 - Bispo!\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Você escolheu Rainha!\n");

        // Movimentação da rainha usando for
        for (mover = 0; mover <= 7; mover ++) {
            printf("Rainha se moveu para Esquerda!\n");
        }
    } else if (escolha == 2) {
        printf("Você escolheu Torre!\n");

        // Movimentação da torre usando while
        while (mover <= 4) {
            printf("Torre se moveu para direita!\n");
            mover ++;
        }
    } else if (escolha == 3) {
        printf("Você escolheu Bispo!\n");

        // Movimentação do bispo usando do while
        do {
            printf("Bispo se moveu para cima, direita!\n");
            mover ++;
        } while (mover <= 4);
    }

    return 0;
}

