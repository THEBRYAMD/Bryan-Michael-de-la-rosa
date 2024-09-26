#include <stdio.h>
#include <stdlib.h>

int main()
{
float pag = 0.0; // variable para almacenar el pago actual
float spa = 0.0; // variable para acumular el total de pagos
printf("ingrese el primer pago: \t"); // pide el primer pago
scanf("%f", &pag); // lee el primer pago
while (pag) { // continua mientras pag no sea 0
    spa = spa + pag; // acumula el pago en spa
    printf("ingrese el siguiente pago: \t "); // pide el siguiente pago
    scanf("%f", &pag); // lee el siguiente pago
}
printf("\n el total de pagos del mes es: %.2f", spa); // imprime el total de pagos acumulados
}
