#include <stdio.h>

// int é uma forma de declarar variáveis em C, de maneira geral, guardam alguma informação

int main() {

    int idade = 20;
    float altura = 1.80;
    char sexo[] = "F"; // Feminino
    char nome[6] = "Maria";
    printf("%s: %s, %d anos, %.2fm de altura", nome, sexo, idade, altura);

    return 0;
}

/*

Tipos de variáveis em C:

int     -->   representa: números inteiros (ex: 1, 2, 3, -10) usa-se %d
float   -->   representa: números com ponto flutuante (ex: 1.5, 2.75, -0.5) usa-se %f
char    -->   representa: caracteres (ex: 'a', 'b', '1', '@') usa-se %s
double  -->   representa: números com ponto flutuante de dupla precisão (ex: 1.234567, 2.345678) usa-se %lf

*/
