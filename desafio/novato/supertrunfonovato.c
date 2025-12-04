#include <stdio.h>

int main () {
    char estado[50], estado2[50];
    char codCarta[5], codCarta2[5];
    char nomeCidade[50], nomeCidade2[50];
    int povo, povo2;
    float area, area2;
    float pib, pib2;
    int numPontosTuristicos, numPontosTuristicos2;

    // Carta 1
    printf("Escolha uma letra de 'A' a 'H':");
    scanf("%s", &estado, &estado2);
    printf("Escolha o código da carta de 01 a 04: ");
    scanf("%s", &codCarta, &codCarta2);
    printf("Escolha o nome da cidade: ");
    scanf("%s", &nomeCidade, &nomeCidade2);
    printf("Qual o número da populaçã? ");
    scanf("%d", &povo, &povo2);
    printf("Qual a área do local(em km²)? ");
    scanf("%f", &area, &area2);
    printf("Qual o PIB desse estado? ");
    scanf("%f", &pib, &pib2);
    printf("Quantos pontos turísticos possui? ");
    scanf("%d", &numPontosTuristicos, &numPontosTuristicos2);

    // Carta 2
    printf("Escolha uma letra de 'A' a 'H':");
    scanf("%s", &estado2);
    printf("Escolha o código da carta de 01 a 04: ");
    scanf("%s", &codCarta2);
    printf("Escolha o nome da cidade: ");
    scanf("%s", &nomeCidade2);
    printf("Qual o número da populaçã? ");
    scanf("%d", &povo2);
    printf("Qual a área do local(em km²)? ");
    scanf("%f", &area2);
    printf("Qual o PIB desse estado? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos possui? ");
    scanf("%d", &numPontosTuristicos2);

    // Carta 1
    printf("Carta 1:\nEstado: %s\nCódigo: %s%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos: %d\n"
    , estado, estado, codCarta, nomeCidade, povo, area, pib, numPontosTuristicos);

    // Carta 2
    printf("Carta 2:\nEstado: %s\nCódigo: %s%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos: %d"
    , estado2, estado2, codCarta2, nomeCidade2, povo2, area2, pib2, numPontosTuristicos2);
    return 0;
}
