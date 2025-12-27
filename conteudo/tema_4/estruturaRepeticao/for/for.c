#include <stdio.h>

/*

for => Estrutura de repetição com número determinado de repetições
  
for (inicialização; condição; incremento) {
    // bloco de código a ser repetido
  }

OBS.: ideal quando se sabe quantas vezes o bloco de código deve ser repetido.
OBS.: a inicialização, condição e incremento são separados por ponto e vírgula (;).
OBS.: a inicialização é executada apenas uma vez, no início do laço.
OBS.: a variável pode ser declarada dentro do for ou fora dele.

*/

int main () {
    int i = 20;
    // Variável foi declarada no proprio for
    for (i ; i >= 10; i--) {
        printf("%d\n", i);
    }

    return 0;
}