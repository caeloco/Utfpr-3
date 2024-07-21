#include <stdio.h>


int main () { 
    int idade, parcelas;
    float seguro;

    printf("1) 18 e 22 \n2) 23 e 27 \n3) 28 e 45 \n4) 46 e 65 \n5) acima de 65 \n");
    scanf("%d", &idade);

    switch(idade) {
        case 1: seguro = 3500;
        break;
        case 2: seguro = 2950;
        break;
        case 3: seguro = 2530;
        break;
        case 4: seguro = 2450;
        break;
        case 5: seguro = 4000;
        break;
    }

    printf("em quantas parcelas sera feito o pagamento: ");
    scanf("%d", &parcelas);

    if (parcelas < 5) {
        printf("valor do pagamento sera: %.2f", seguro);
    }
    else {
        parcelas = (parcelas - 4) * 3;
        parcelas = (seguro / 100) * parcelas;
        printf("valor do pagamento sera: %.2f", seguro + parcelas);
    }

return 0;
}