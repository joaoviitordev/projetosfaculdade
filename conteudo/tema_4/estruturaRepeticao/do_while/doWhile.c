#include <stdio.h>

/*

do while => executa o bloco de código pelo menos 1 vez, depois verifica a condição de repetição.

Sintaxe:

do {
    // bloco de código
} while (condição);

*/

int main () {
    int i = 1; // Variável

    do { // Entrada de pelo menos 1 repetição
        printf("%d\n", i);
        i++;
    } while (i <= 50); // Condição de repetição

    return 0;
}