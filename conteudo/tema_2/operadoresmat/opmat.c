#include <stdio.h>

// Operadores matemáticos básicos em C

/*int main () {
    int a = 10;
    int b = 3;

    // Adição
    int soma = a + b;
    printf("Soma: %d + %d = %d\n", a, b, soma);

    // Subtração
    int subtracao = a - b;
    printf("Subtração: %d - %d = %d\n", a, b, subtracao);

    // Multiplicação
    int multiplicacao = a * b;
    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);

    // Divisão
    int divisao = a / b;
    printf("Divisão: %d / %d = %d\n", a, b, divisao);

    // Módulo
    int modulo = a % b;
    printf("Módulo: %d %% %d = %d\n", a, b, modulo);

    return 0;
}*/
int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Escolha um número: ");
    scanf("%d", &num1);
    printf("Escolha outro número: ");
    scanf("%d", &num2);

    // Soma
    soma = num1 + num2;

    // Subtração
    subtracao = num1 - num2;

    // Multiplicação
    multiplicacao = num1 * num2;

    // Divisão
    divisao = num1 / num2;

    printf("A soma desses números é: %d\n", soma);
    printf("A subtração desses números é: %d\n", subtracao);
    printf("A multiplicação desses números é: %d\n", multiplicacao);
    printf("A divisão desses números é: %d\n", divisao);

    return 0;
}


