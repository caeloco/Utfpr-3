#include <stdio.h>


int main () { 
    int escala;
    float temperatura, valor;

    printf("digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("digite em qual escala esta a temperatura \n1) celsius \n2) fahrenheit \n3) kelvin \n");
    scanf("%d", &escala);

    switch(escala) {
        case 1: valor = temperatura + 273.15;
                printf("Faltam %.2f celsius para o zero absoluto", valor * -1);
                break;
        case 2: valor = temperatura + 479.67;
                printf("Faltam %.2f fahrenheit para o zero absoluto", valor * -1);
                break;
        case 3: valor = temperatura;
                printf("Faltam %.2f kelvin para o zero absoluto", valor * -1);
                break;
    }

return 0;
}