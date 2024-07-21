#include <stdio.h>


int main () { 
    float media = 0, presenca, nota;

    for (int i = 0; i < 3; i++) {
        printf("digite a nota da prova %d do aluno", i + 1);
        scanf("%f", &nota);
        media += nota;
    }

    media /= 3;

    printf("digite a %% de presenca do aluno: ");
    scanf("%f", &presenca);

    if (media >= 6 && presenca > 75) {
        printf("Aprovado");
    }
    else if (media >= 8 && presenca >= 50) {
        printf("Aprovado");
    }
    else if (media < 6 && presenca > 75) {
        printf("Pode fazer a recuperacao");
    }
    else {
        printf("Reprovado");
    }

return 0;
}