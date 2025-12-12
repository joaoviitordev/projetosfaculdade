#include <stdio.h>

int main () {
    char estado[50], estado2[50];
    char codCarta[5], codCarta2[5];
    char nomeCidade[50], nomeCidade2[50];
    unsigned long int povo, povo2;
    float area, area2;
    float pib, pib2;
    int numPontosTuristicos, numPontosTuristicos2;
    
    // Carta 1
    printf("Escolha uma letra de 'A' a 'H': \n");
    scanf("%49s", estado);
    printf("Escolha o código da carta de 01 a 04: \n");
    scanf("%4s", codCarta);
    printf("Escolha o nome da cidade: \n");
    scanf("%49s", nomeCidade);
    printf("Qual o número da população? \n");
    scanf("%lu", &povo);
    printf("Qual a área do local(em km²)? \n");
    scanf("%f", &area);
    printf("Qual o PIB desse estado? \n");
    scanf("%f", &pib);
    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &numPontosTuristicos);

    // Carta 2
    printf("Escolha uma letra de 'A' a 'H': \n");
    scanf("%49s", estado2);
    printf("Escolha o código da carta de 01 a 04: \n");
    scanf("%4s", codCarta2);
    printf("Escolha o nome da cidade: \n");
    scanf("%49s", nomeCidade2);
    printf("Qual o número da população? \n");
    scanf("%lu", &povo2);
    printf("Qual a área do local(em km²)? \n");
    scanf("%f", &area2);
    printf("Qual o PIB desse estado? \n");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &numPontosTuristicos2);

    float densidade = (float)povo / area;
    float densidade2 = (float)povo2 / area2;
    float pibPerCapita = pib / (float)povo;
    float pibPerCapita2 = pib2 / (float)povo2; 
    
    // Carta 1
    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado, codCarta, nomeCidade);
    printf("População: %lu\nÁrea: %.0f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade da população: %.2f hab/km²\n", povo, area, pib, numPontosTuristicos, densidade);
    printf("PIB per capita da Carta 1: %.2f reais\n", pibPerCapita);

    // Carta 2
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codCarta2, nomeCidade2);
    printf("População: %lu\nÁrea: %.0f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade da população: %.2f hab/km²\n", povo2, area2, pib2, numPontosTuristicos2, densidade2);
    printf("PIB per capita da Carta 2: %.2f reais\n\n", pibPerCapita2);

    // Super Poder
    float superPoder = (float)povo + area + pib + (float)numPontosTuristicos + pibPerCapita + (1.0f / densidade); 
    float superPoder2 = (float)povo2 + area2 + pib2 + (float)numPontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);
    
    printf("Esse é o Super Poder da Carta 1: %.2f\n", superPoder);
    printf("Esse é o Super Poder da Carta 2: %.2f\n", superPoder2);
    
    // Comparação dos Poderes
    printf("A carta 1 tem o Super Poder maior que a carta 2 ? %d\n", superPoder > superPoder2);
    printf("A carta 1 tem o PIB per capita maior que a carta 2 ? %d\n", pibPerCapita > pibPerCapita2);

    /* Para densidade: menor valor vence */
    
    printf("A carta 1 tem densidade menor (vence) que a carta 2 ? %d\n", densidade < densidade2);
    printf("A carta 1 tem maior PIB que a carta 2 ? %d\n", pib > pib2);
    printf("A carta 1 tem maior população que a carta 2 ? %d\n", povo > povo2);
    printf("A carta 1 tem a maior área que a carta 2 ? %d\n", area > area2);
    printf("A carta 1 tem mais pontos turiristicos que a carta 2 ? %d\n", numPontosTuristicos > numPontosTuristicos2);

    return 0;
}




