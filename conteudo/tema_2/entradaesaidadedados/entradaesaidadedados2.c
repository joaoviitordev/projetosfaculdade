#include <stdio.h>

int main () {
    char nome[50];
    int idade;
    char sexo[15];
    float altura;
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo: ");
    scanf("%s", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Seu nome é %s seu sexo é %s sua altura é %.2fm e sua idade é %d anos.", nome, sexo, altura, idade);

}