#include <stdio.h>
#include <stdlib.h>

int main()
{
int num = 0; // variable para almacenar el numero ingresado
long cua = 0; // variable para almacenar el cuadrado del numero
long suc = 0; // variable para acumular la suma de los cuadrados
printf("\n ingrese un numero entero -0 para terminar- : \t"); // pide un numero entero
scanf("%d", &num); // lee el numero ingresado
while(num){ // continua mientras num no sea 0
    cua = pow(num, 2); // calcula el cuadrado del numero
    printf("%d al cubo es %ld", num, cua); // imprime el cuadrado
    suc = suc + cua; // acumula el cuadrado en suc
    printf("\n ingrese un numero entero -0 para terminar-: \t"); // pide el siguiente numero
    scanf("%d", &num); // lee el siguiente numero
}
printf("\n la suma de los cuadrados es %ld", suc); // imprime la suma de los cuadrados
}
