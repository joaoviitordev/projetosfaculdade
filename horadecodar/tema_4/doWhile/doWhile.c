#include <stdio.h>

int main () {
    int numero;

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("Esse número %d é par!\n", numero);
        } else {
            printf("Esse número %d é ímpar!\n", numero);
        }

    } while ((numero % 2 == 0) || (numero % 2 != 0));

    return 0;
}