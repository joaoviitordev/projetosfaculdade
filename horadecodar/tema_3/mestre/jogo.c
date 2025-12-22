#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int numeroJogador;
    int numeroComputador;
    int resultado;
    char tipoComparacao;

    // Gerar os números do computador
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre: 1 e 100

    printf("Bem vindo ao Jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação. \n");
    printf("A - Para maior. \n");
    printf("B - Para menor. \n");
    printf("C - Para igual. \n");

    printf("Escolha o tipo de comparação (A, B ou C): \n");
    scanf("%c", &tipoComparacao);
    printf("Digite o seu número escolhido (1-100): \n");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao) {
        case 'A':
        case 'a':
            printf("Seu número: %d | Número do computador: %d \n", numeroJogador, numeroComputador);
            resultado = numeroJogador >= numeroComputador ? printf("Você venceu!\n") : printf("Você perdeu!\n");
            break;
        case 'B':
        case 'b':
            printf("Seu número: %d | Número do computador: %d \n", numeroJogador, numeroComputador);
            resultado = numeroJogador <= numeroComputador ? printf("Você venceu!\n") : printf("Você perdeu!\n");
            break;
        case 'C':
        case 'c':
            printf("Seu número: %d | Número do computador: %d \n", numeroJogador, numeroComputador);
            resultado = numeroComputador == numeroJogador ? printf("Você venceu!\n") : printf("Você perdeu!\n");
            break;
        default:
            printf("Opção inválida, tente novamente!");
    }

    return 0;
}