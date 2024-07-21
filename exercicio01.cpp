#include <stdio.h>


int main () { 
    int mat, fisica, opcao;

    printf("Quanto o aluno tirou em matematica? \n");
    scanf("%d", &mat);

    printf("Quanto o aluno tirou em fisica? \n");
    scanf("%d", &fisica); 

    if (mat > 7 && fisica > 7) {
        printf("escolha o concurso: \n");
        printf("digite 1 para matematica, 2 para fisica e 3 para desistente: \n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: printf("voce escolheu matematica");
                    break;
            case 2: printf("voce escolheu fisica");
                    break;
            case 3: printf("voce desistiu");
                    break;
        }

        return 0;
    }

    if (mat > 7) {
        printf("voce pode fazer o concurso de matematica");
    }

    if (fisica > 7) {
        printf("voce pode fazer o concurso de fisica");
    }

return 0;
}