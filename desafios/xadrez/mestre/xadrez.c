#include <stdio.h>

// Movimentação de peças de xadrez

void movRainha (int mover) {
    if (mover >= 0) {
        printf("Rainha se moveu para Esquerda!\n");
        movRainha(mover - 1);
    }
}

void movTorre (int mover) {
    if (mover >= 0) {
        printf("Torre se moveu para direita!\n");
        movTorre(mover - 1);
    }
}

void movBispo (int moverVertical, int moverHorizontal) {
    for (moverVertical = 0; moverVertical <= 0; moverVertical++) {
        for (moverHorizontal = 0; moverHorizontal <= 4; moverHorizontal++) {
            printf("Bispo se moveu para cima e direita!\n");
        }
        printf("\n");
    }
}

int main () {

    int escolha;
    int moverCavaloCima = 0;
    int moverCavaloDireita = 0;

    int quantidadeRainha = 7;
    int quantidadeTorre = 4;
    int quantidadeBispo;

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

        //Movimentação da rainha
        movRainha(quantidadeRainha);
        
    } else if (escolha == 2) {
        printf("Você escolheu Torre!\n");
        printf("Torre vai se movimentar 5 vezes para a direita!\n");

        // Movimentação da torre 
        movTorre(quantidadeTorre);

    } else if (escolha == 3) {
        printf("Você escolheu Bispo!\n");
        printf("Bispo vai se movimentar 5 vezes para cima e direita!\n");

        // Movimentação do bispo
        movBispo(quantidadeBispo, quantidadeBispo);

    } else if (escolha == 4) {
        printf("Você escolheu Cavalo!\n");
        printf("Cavalo vai se movimentar 2 vezes para cima e 1 vez para direita!\n");
        
        // Movimentação do cavalo (loop avançado)
        for (moverCavaloCima = 0, moverCavaloDireita = 0; moverCavaloCima <= 1 && moverCavaloDireita <= 1; moverCavaloCima++, moverCavaloDireita++) {
            if (moverCavaloCima > 2) continue;
            // Na primeira iteração, sobe duas vezes seguidas e então vai para a direita
            if (moverCavaloCima == 0 && moverCavaloDireita == 0) {
                printf("Cavalo se moveu para cima!\n");
                printf("Cavalo se moveu para cima!\n");
                printf("Cavalo se moveu para direita!\n");
                break;
            }
            printf("Cavalo se moveu para cima!\n");
            if (moverCavaloDireita > 0) break;
            printf("Cavalo se moveu para direita!\n");
        }
    }

    return 0;
}
