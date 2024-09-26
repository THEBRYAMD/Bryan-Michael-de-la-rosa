#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pag = 0; // variable para almacenar el pago actual
    float spa = 0; // variable para acumular el total de pagos
    printf(" ingrese el primer pago: \t \n"); // pide el primer pago
    scanf("%f", &pag); // lee el primer pago
    do {
        spa = spa + pag; // acumula el pago en spa
        printf("ingrese el siguiente pago -0 para terminar-: \t \n"); // pide el siguiente pago
        scanf("%f", &pag); // lee el siguiente pago
    } while (pag); // continua el bucle mientras pag no sea 0
    printf("\n el total de pagos del mes es: %.2f", spa); // imprime el total de pagos acumulados
}
