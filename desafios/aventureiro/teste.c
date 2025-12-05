#include <stdio.h>

int main () {
    char estado[50];
    char codCarta[5];
    char nomeCidade[50];
    int povo;
    float area;
    float pib;
    int numPontosTuristicos;
    
    
    // Carta 1
    printf("Escolha uma letra de 'A' a 'H':");
    scanf("%s", &estado);
    printf("Escolha o código da carta de 01 a 04: ");
    scanf("%s", &codCarta);
    printf("Escolha o nome da cidade: ");
    scanf("%s", &nomeCidade);
    printf("Qual o número da populaçã? ");
    scanf("%d", &povo);
    printf("Qual a área do local(em km²)? ");
    scanf("%f", &area);
    printf("Qual o PIB desse estado? ");
    scanf("%f", &pib);
    printf("Quantos pontos turísticos possui? ");
    scanf("%d", &numPontosTuristicos);
    
    float densidade = povo / area;
    
    // Carta 1
    printf("Carta 1:\nEstado: %s\nCódigo: %s%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos: %d\nDensidade da população: %.2f"
        , estado, estado, codCarta, nomeCidade, povo, area, pib, numPontosTuristicos, densidade);
        
        return 0;
}



printf("Carta 2:\nEstado: %s\nCódigo: %s%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB:%.2f\nNúmero de Pontos Turísticos: %d\nDensidade da população: %.2f"
    , estado2, estado2, codCarta2, nomeCidade2, povo2, area2, pib2, numPontosTuristicos2, densidade2);
