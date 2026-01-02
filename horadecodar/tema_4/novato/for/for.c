#include <stdio.h>

int main () {
    float numero;
    int i;
    
    printf("Digite um número para ver a tabuada: ");
    scanf("%f", &numero);

    for (i = 0; i <= 10; i++) {
        printf("%d x %.0f = %.0f\n", i, numero, i * numero);
    }
}