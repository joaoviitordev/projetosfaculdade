#include <stdio.h>

int main () {
    char estado[50], estado2[50];
    char codCarta[5], codCarta2[5];
    char local[50], local2[50];
    unsigned long int povo, povo2;
    float area, area2;
    float pib, pib2;
    int numPontosTuristicos, numPontosTuristicos2;
    
    // Carta 1
    printf("Escolha uma letra de 'A' a 'H': \n");
    scanf("%49s", estado);
    printf("Escolha o código da carta de 01 a 04: \n");
    scanf("%4s", codCarta);
    printf("Escolha o nome do local: \n");
    scanf("%49s", local);
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
    printf("Escolha o nome do local: \n");
    scanf("%49s", local2);
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
    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome do Local: %s\n", estado, codCarta, local);
    printf("População: %lu\nÁrea: %.0f km²\nPIB: %.0f\nNúmero de Pontos Turísticos: %d\nDensidade da população: %.2f hab/km²\n", povo, area, pib, numPontosTuristicos, densidade);
    printf("PIB per capita da Carta 1: %.2f reais\n", pibPerCapita);

    // Carta 2
    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome do Local: %s\n", estado2, codCarta2, local2);
    printf("População: %lu\nÁrea: %.0f km²\nPIB: %.0f\nNúmero de Pontos Turísticos: %d\nDensidade da população: %.2f hab/km²\n", povo2, area2, pib2, numPontosTuristicos2, densidade2);
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
   
    // Efetuando a Comparação 
    if (superPoder > superPoder2) {
        printf("Comparação de cartas (Atributo: SuperPoder):\n");
        printf("Carta 1 - %s: %.0f\n", local, superPoder);
        printf("Carta 2 - %s: %.0f\n", local2, superPoder2);
        printf("Resultado: Carta 1 é a vencedora!");
    } else{
        printf("Comparação de cartas (Atributo: SuperPoder):\n");
        printf("Carta 1 - %s: %.0f\n", local, superPoder);
        printf("Carta 2 - %s: %.0f\n", local2, superPoder2);
        printf("Resultado: Carta 2 é a vencedora!\n");
    } 
    
    // Menu interativo + Comparação de atributos
    int escolha;

    printf("Agora você pode escolher os atributos e compará-los.\n");
    printf("0 - Escolha comparar o nome do pais!\n");
    printf("1 - Escolha comparar a população!\n");
    printf("2 - Escolha comparar a área!\n");
    printf("3 - Escolha comparar o PIB!\n");
    printf("4 - Escolha comparar o número de pontos turísticos!\n");
    printf("5 - Escolha comparar a densidade demográfica!\n");
    printf("Qual sua escolha? \n");
    scanf("%d", &escolha);

    // Menu
    switch (escolha) {
        case 0:
            printf("Você escolheu comparar os nomes!\n");
        break;
        case 1:
            printf("Você escolheu comparar a população!\n");
        break;
        case 2:
            printf("Você escolheu comparar a área!\n");
        break;
        case 3:
            printf("Você escolheu comparar o PIB!\n");
        break;
        case 4:
            printf("Você escolheu comparar o número de pontos turísticos!\n");
        break;
        case 5:
            printf("Você escolheu comparar a densidade demográfica!\n");
        break;
        default:
        printf("Escolha inválida, tente novamente!\n");
    }
    
    // Comparação
    if (escolha == 0) {
        printf("Comparando os nomes: Local 1 - %s e Local 2 - %s.\n", local, local2);
    } else if (escolha == 1) {
        printf("Comparando a população: Local 1 - %lu e Local 2 - %lu.\n", povo, povo2);
        if (povo > povo2) {
            printf("%s tem a maior população %lu -> Venceu!", local, povo);
        } else if (povo2 > povo) {
            printf("%s tem a maior populaçõa %lu -> Venceu!", local2, povo2);
        } else {
            printf("%s e %s possuem mesma população, EMPATE!", local, local2);
        }
        
    } else if (escolha == 2) {
        printf("Comparando as áreas: Local - 1 %.0f e Local 2 - %.0f\n", area, area2);
        if (area > area2) {
            printf("%s tem maior área %.0f -> Venceu!", local, area);
        } else if (area < area2) {
            printf("%s tem maior área %.0f -> Venceu!", local2, area2);
        } else {
            printf("%s e %s possuem mesma área, EMPATE!", local, local2);
        }

    } else if (escolha == 3) {
        printf("Comparando o PIB: Local 1 - %.0f e Local 2 - %.0f\n", pib, pib2);
        if (pib > pib2) {
            printf("%s tem maior PIB %.0f -> Venceu!", local, pib);
        } else if (pib < pib2) {
            printf("%s tem maior PIB %0.f -> Venceu!", local2, pib2);
        } else {
            printf("%s e %s possuem mesmo PIB, EMPATE!", local, local2);
        }

    } else if (escolha == 4) {
        printf("Comparando o número de pontos turísticos: Local 1 - %d e Local 2 - %d\n", numPontosTuristicos, numPontosTuristicos2);
        if (numPontosTuristicos > numPontosTuristicos2) {
            printf("%s tem maior quantidade de números de pontos turísticos %d -> Venceu!", local, numPontosTuristicos);
        } else if (numPontosTuristicos < numPontosTuristicos2) {
            printf("%s tem maior quantidade de números de pontos turísticos %d -> Venceu!", local2, numPontosTuristicos2);
        } else {
            printf("%s e %s possuem mesma quantidade de pontos turísticos, EMPATE!", local, local2);
        }

    } else if (escolha == 5) {
        printf("Comparando a densidade demográfica: Local 1 - %.2f e Local 2 - %.2f\n", densidade, densidade2);
        if (densidade < densidade2) {
            printf("%s tem menor densidade demográfica %.2f -> Venceu!", local, densidade);
        } else if (densidade > densidade2) {
            printf("%s tem menor densidade demográfica %.2f -> Venceu!", local2, densidade2);
        } else {
            printf("%s e %s possuem mesma densidade demográfica, EMPATE!", local, local2);
        }
    }
    
    return 0;
}