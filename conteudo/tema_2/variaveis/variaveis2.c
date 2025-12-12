#include <stdio.h>

/*int main () {

    int num = 10;
    int num2 = 17;
    num = num2;
    printf("O novo valor é: %d\n", num);

    int teste = 21;
    int teste1;
    teste1 = teste;
    printf("O valor novo é: %d\n", teste1);

    int x, y, z;
    x = y = z = 25;
    int v = x + x + x;
    printf("%d\n", x + y + z);

    return 0;
}*/

int main () {
    int studantID = 0001;
    int studantAge = 21;
    float studantHeight = 1.75;
    char studantName[12] = "João Gomes";
    char studantClass[39] = "Análise e Desenvolvimento de Sistemas";

    printf("Nome: %c, ID: %d, Idade: %d anos, Altura: %.2fm, Cursando: %c\n", studantName, studantID, studantAge, studantHeight, studantClass);
    return 0;
}