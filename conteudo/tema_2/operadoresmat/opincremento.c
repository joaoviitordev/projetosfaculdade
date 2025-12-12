#include <stdio.h>

/*
Operadores de incremento e decremento em C

Incremento (++) e Decremento (--)

Pré-incremento: ++variável
Pós-incremento: variável++

Pré-decremento: --variável
Pós-decremento: variável--
*/

int main () {
    int num = 1;
    printf("Valor padrão: %d\n", num);    // Valor inicial
    num ++; 
    printf("Pós incremento: %d\n", num);  // Pós-incremento
    num --;
    printf("Pós decremento: %d\n", num);  // Pós-decremento
    ++ num;
    printf("Pré incremento: %d\n", num);  // Pré-incremento
    -- num;
    printf("Pré decremento: %d\n", num);  // Pré-decremento
    return 0;
}