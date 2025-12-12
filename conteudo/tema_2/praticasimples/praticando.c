#include <stdio.h>

int main () {
    char nome[50];
    int idade;
    float altura;
    char turma[50];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua altura é: ");
    scanf("%f", &altura);
    printf("Qual sua turma? ");
    scanf("%s", &turma);
    printf("Seu nome é %s, sua idade %d, sua altura %.2fm, sua turma: %s", nome, idade, altura, turma);
    
}