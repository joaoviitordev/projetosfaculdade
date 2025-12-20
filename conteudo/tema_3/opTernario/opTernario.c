#include <stdio.h>

/* Operador Ternário em C

O operador ternário é uma forma compacta de escrever uma instrução if-else. Ele é chamado de ternário porque envolve três partes.

-> Uma condição a ser avaliada.
-> Um valor a ser retornado se a condição for verdadeira.
-> Um valor a ser retornado se a condição for falsa.

ex.: condicao ? valor_se_verdadeiro : valor_se_falso;

*/

int main () {
    int idade = 5;
    int resultado;

    resultado = idade >= 18 ? printf("Você é maior de idade!\n") : printf("Você é menor de idade!\n");

    return 0;
}
