#include <stdio.h>

/*

Operadores de Atribuição em C

Atribuição Simples (=):
Atribuição com Soma (+=):
Atribuição com Subtração (-=):
Atribuição com Multiplicação (*=):
Atribuição com Divisão (/=):

*/
int main() {

int numero1, numero2, resultado;

resultado = 10;
printf("Resultado: %d\n", resultado);

resultado += 20;
printf("Resultado com atribuição de soma: %d\n", resultado);

resultado -= 5;
printf("Resultado com atribuição de subtração: %d\n", resultado);

resultado *= 2;
printf("Resultado com atribuição de multiplicação: %d\n", resultado);

resultado /= 5;
printf("Resultado com atribuição de divisão: %d\n", resultado);

return 0;
}