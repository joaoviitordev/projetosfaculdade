#include <stdio.h>

/*

Loops Avançados -> são loops que envolvem:

- Loops com múltiplas variáveis
- Loops com condições múltiplas
- Loops com atualizações complexas
- Uso de continue e break

OBS.: continue => Faz com que o loop pule a iteração atual e prossiga com a próxima iteração, verificando a condição do loop novamente.
OBS.: break => Interrompe o loop imediatamente, saindo dele antes que todas as iterações sejam concluídas.

*/

int main () {

    for (int i = 0, j = 10; i < j; i ++, j --) {
        printf("i = %d e j = %d\n", i, j);
    }

    return 0;
}

/*

#include <stdio.h>

Loops com atualizações complexas => Operador ternário

int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}


#include <stdio.h>

Loops com condições múltiplas

int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}


#include <stdio.h>

Uitlizando continue e break

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }
    return 0;
}

*/