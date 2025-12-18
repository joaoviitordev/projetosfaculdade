#include <stdio.h>

int main () {
    int idade;

    /*
    idade < 12 => criança
    idade >= 12 && idade < 18 => adolescente
    idade >= 18 && idade < 60 => adulto
    idade >= 60 => idoso
    */

    printf("Qual sua idade ? \n");
    scanf("%d", &idade);

    if (idade >= 60) {
        printf("Você é um idoso(a).");
    } else if (idade < 60 && idade >= 18) {
        printf("Você é adulto(a).");
    } else if (idade < 18 && idade >= 12) {
        printf("Você é adolescente.");
    } else {
        printf("Você é criança.");
    }

    return 0;
}