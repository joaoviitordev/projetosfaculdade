#include <stdio.h>

// Desenvolver um programa que calcule a média da nota dos alunos.

int main () {

    float nota1, nota2;
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    float somaNotas = (nota1 + nota2) / 2;
    printf("Essa é a média de suas notas: %.2f", somaNotas);

    return 0;
}