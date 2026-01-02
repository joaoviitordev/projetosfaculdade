#include <stdio.h>

// Loops aninhados são basicamente loop dentro de outro loop, em inglês (nested loop).
/*

estrutura "externa" (condição) {
    estrutura "interna" (condição) {
        código
    }
}

o loop externo so começa a ser executado quando o loop interno for completamente executado
OBS.: o for é o mais utilizado nos loops aninhados!

*/

// Tabuada com loops aninhados
int main () {

    for (int i = 1; i <= 10; i++) {
        
        for (int j = 1; j <= 10; j++) {
            printf("%d\n", i * j);
        }

        printf("\n");
    }

    return 0;
}

/*
#include <stdio.h>

while

int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

#include <stdio.h>

do while

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}

*/
