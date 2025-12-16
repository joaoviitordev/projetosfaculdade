#include <stdio.h>

int main () {

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.99;
    float valorB = 25.99;

    float estoqueMinimoA = 550;
    float estoqueMinimoB = 2500;

    double valorTotalA = valorA * estoqueA;
    double valorTotalB = valorB * estoqueB;

    int resultadoA, resultadoB;

    // Exibição dos Produtos.

    printf("O %s possui um estoque de %u unidade e seu valor é R$%.2f.\n", produtoA, estoqueA, valorA);
    printf("O %s possui um estoque de %u unidade e seu valor é R$ %.2f.\n", produtoB, estoqueB, valorB);

    // Comparação com o valor minimo de estoque.

    resultadoA = estoqueA >= estoqueMinimoA;
    resultadoB = estoqueB >= estoqueMinimoB;

    printf("O %s tem estoque minímo de %d\n", produtoA, resultadoA);
    printf("O %s tem estoque minímo de %d\n", produtoB, resultadoB);

    // Valor do estoque.

    printf("O valor total do estoque do produto A é: R$ %.0lf.\n", valorTotalA);
    printf("O valor total do estoque do produto B é: R$ %.0lf.\n", valorTotalB);

    // Comparação entre os valores totais dos produtos 

    printf("O valor total de A (R$ %.0lf) é maior que o valor total de B (R$ %.0lf): %d\n", valorTotalA, valorTotalB, 
        (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}