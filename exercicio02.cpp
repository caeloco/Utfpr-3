#include <stdio.h>


int main () { 
    int saldo, compras, total = 0, opcao;
    char credito;

    printf("digite seu saldo: ");
    scanf("%d", saldo);

    for (int i = 0; i < 3; i++) {
        printf("digite o valor do produto %d", i + 1);
        scanf("%d", compras);
        total += compras;
    }

    printf("O valor total da compra foi %d", total);

    if (saldo - total >= 0) {
        printf("saldo atual: %d", saldo - total);
    }

    else {
        printf("saldo atual: %d", saldo - total);
        printf("deseja continuar a compra? \n1.Sim \n2.Nao");
        scanf("%d", opcao);

        if (opcao == 1) {
            printf("Digite um cartao de credito: ");
            scanf("%c", credito);
        }
        else {
            printf("Compra cancelada");
        }
    }

return 0;
}