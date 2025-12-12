#include <stdio.h>

/* Operadores relacionais em C

>  (maior que)
<  (menor que)
>= (maior ou igual)
<= (menor ou igual)
== (igual)
!= (diferente)

A resposta da comparação é em valor boolean (1 é verdadeiro e 0 é falso).

*/
int main () {
    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d", a != b);
    
    return 0;
}