#include <stdio.h>

// Iniciando as Estruturas de Decisão em C

int main () {
    int a = 20;
    int b = 20;

    if (a == b) {
        printf ("A variável A é igual a variável B.\n");
    } else {
        printf("A variável A é diferente da variável B.\n");
    }

    int num = 40;

    if (num % 2 == 0) {
        printf ("Esse número é par.");
    }

    return 0;
}

// O que fica entre os parenteses do "if" é uma expressão lógica (Condição) que pode ser verdadeira ou falsa.
// Se a condição for verdadeira, o bloco de código dentro das chaves do "if" será executado.
// Se a condição for falsa, o bloco de código dentro das chaves do "else" será executado.
// Note que o "else" é opcional. Podemos usar apenas o "if" se desejarmos.
// if pode ser traduzido como "se" e else como "senão".