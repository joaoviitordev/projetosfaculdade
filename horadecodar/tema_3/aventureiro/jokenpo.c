#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Objetivo: criar um jogo de pedra, papel ou tesoura.
// Regras: Pedra ganha de tesoura, Pedra perde para papel, Tesoura ganha de papel.


int main () {

    int jogador, computador;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    printf("JOGO PEDRA, PAPEL OU TESOURA\n");
    printf("Escolha uma opção:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    printf("Qual sua escolha ?\n");
    scanf("%d", &jogador);

    computador = rand() % 3; // Gera um número aleatório entre 0 e 2

    // Exibe a escolha do jogador
    switch (jogador) {
        case 0:
            printf("Jogador escolheu: Pedra!\n");
            break;
        case 1:
            printf("Jogador escolheu: Papel!\n");
            break;
        case 2:
            printf("Jogador escolheu: Tesoura\n");
            break;
        default:
        printf("Escolha inválida, tente novamente.\n");
    }

    // Exibe a escolha do computador
    switch (computador) {
        case 0:
            printf("Computador escolheu: Pedra!\n");
            break;
        case 1:
            printf("Computador escolheu: Papel!\n");
            break;
        case 2:
            printf("Computador escolheu: Tesoura!\n");
            break;
    }

    if (jogador == computador){
        printf("Jogador e Computador escolheram a mesma opção: EMPATE!");
    } else if ((jogador == 0) && (computador == 2) || (jogador == 1) && (computador == 0) || (jogador == 2) && (computador == 1)) {
        printf("Jogador Venceu !!!");
    } else if ((jogador == 0) && (computador == 1) || (jogador == 1) && (computador == 2) || (jogador == 2) && (computador == 0)) {
        printf("Computador Venceu !!!");
    }

    return 0;
}

