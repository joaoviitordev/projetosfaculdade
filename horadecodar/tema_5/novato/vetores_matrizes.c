#include <stdio.h>

int main () {

    int index;

    char *notaAlunos[3][3] = {
        {"Aluno 0", "Port: 30", "Mat: 90"},
        {"Aluno 1", "Port: 60", "Mat: 60"},
        {"Aluno 2", "Port: 90", "Mat: 30"}
    };

    printf("Digite um número para escolher um aluno.\n");
    printf("0 - Para aluno 0\n");
    printf("1 - Para aluno 1\n");
    printf("2 - Para aluno 2\n");
    scanf("%d", &index);

    printf("A nota do %s em %s e em %s !\n", notaAlunos[index][0], notaAlunos[index][1], notaAlunos[index][2]);

    return 0;
}