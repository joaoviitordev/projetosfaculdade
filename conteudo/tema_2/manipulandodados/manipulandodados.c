#include <stdio.h>

// Manipulação e Conversão de tipos de dados em C

/*int main () {
    int a = 10;     // inteiro
    float b = 3.5;  // ponto flutuante
    float resultado = a + b; // 'a' é convertido implicitamente para float(ponto flutuante)

    printf("Resultado: %.2f", resultado);

    return 0;
}*/

int main () {
    int a = 10;      // inteiro
    int b = 3;    // ponto flutuante
    float resultado =  (float)a / b ; // conversão explícita de 'b' para float

    printf("Resultado: %.2f", resultado);

    return 0;
}