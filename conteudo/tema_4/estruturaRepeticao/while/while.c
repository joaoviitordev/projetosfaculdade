#include <stdio.h>

/* 
o while executa repetidamente um bloco de código enquanto uma condição especificada é verdadeira
a condição é booleana => verdadeiro ou falso
*/

int main () {
    int i = 1; // Variável

    while (i <= 5){ //Condição
        printf("%d\n", i);
        i ++; // Incremento
    }

    return 0;
}