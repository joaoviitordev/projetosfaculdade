#include <stdio.h>

/* Operadores Lógicos */

/* &&, || e ! 

&& -> E lógico (AND) retorna verdadeiro se ambas as expressões forem verdadeiras
|| -> OU lógico (OR) retorna verdadeiro se pelo menos uma das expressões for verdadeira
!  -> NÃO lógico (NOT) retorna o inverso do valor lógico da expressão

*/

int main () {
    int a = 10;
    int b = 1;

    int c = -2;
    int d = -5;

    // Exemplo de uso do operador lógico E (&&)
    if (a > 0 && b > 0) {
        printf ("Os dois números são positivos.\n");
    } else {
        printf("Pelo menos um dos números é negativo.\n");
    }

    // Exemplo de uso do operador lógico OR (||)
    if (c > 0 || d > 0) {
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("Os dois números são negativos.\n");
    }

    // Exemplo de uso do operador lógico NOT (!)
    if (!(a > 0)) {
        printf("O número A não é negativo.\n");
    } else {
        printf("O número A é negativo.\n");
    }

    return 0;
}
