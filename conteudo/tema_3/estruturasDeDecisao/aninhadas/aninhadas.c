#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);    

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60) {
        printf("Você está dentro dos requisitos de idade.\n");
        if (renda < 2000) {
            printf("Você está dentro dos requisitos de renda.\n");
        } else {
            printf("Você não está dentro dos requisitos de renda.\n");
        }
    } else{
        printf("Você não está nos requisitos de idade.\n");
    }
    
}