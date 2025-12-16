#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque;

    printf("Digite a temperatura atual: \n");
    scanf("%f", &temperatura);

    printf("Digite a umidade atual: \n");
    scanf("%f", &umidade); 

    printf("Digite o estoque atual: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
    printf("A temperatura está alta. \n");
   } else {
    printf("A temperatura está confortavel. \n");
   }

   if (umidade > 50) {
    printf("O ambiente está bastante úmido. \n");
   } else {
    printf("Está com pouca umidade. \n");
   }

   if (estoque >= 100) {
    printf("O estoque está ok. \n");
   } else {
    printf("Está faltando produtos. ");
   }
}