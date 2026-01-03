#include <stdio.h>
/*
Recursividade em C

- Uma função recursiva é uma função que chama a si mesma.
- É importante definir um caso base para evitar loops infinitos.
- A recursividade pode ser usada para resolver problemas que se repetem de forma semelhante.

*/

void exemploRecusividade(int numero) {
    if (numero > 0) {
        printf("%d\n", numero);

        exemploRecusividade(numero - 1);
    }
}

int main () {

    int quantidade = 10;

    exemploRecusividade(quantidade);
    
    return 0;
}