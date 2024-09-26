#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador del bucle
    int num = 0; // n�mero ingresado por el usuario
    long fac = 0; // variable para almacenar el factorial
    printf("ingrese el numero:\n"); // pide al usuario que ingrese un n�mero
    scanf("%d", &num); // guarda el n�mero ingresado
    if (num >= 0) // verifica si el n�mero es no negativo
    {
        fac = 1; // inicializa el factorial en 1
        for (i = 1; i <= num; i++){ // bucle para calcular el factorial
            fac *= i; // multiplica fac por i
        }
        printf("\n el factorial es de %d es: %ld", num, fac); // imprime el resultado del factorial
    }
    else {
        printf("\n error en el dato ingresado"); // mensaje de error si el n�mero es negativo
    }
}
