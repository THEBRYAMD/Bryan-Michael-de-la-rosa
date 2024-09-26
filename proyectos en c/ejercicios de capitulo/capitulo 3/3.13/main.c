#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0; // almacena el número ingresado
    printf("ingresa el numero para calcular la serie: "); // pide un número
    scanf("%d", &num); // guarda el número ingresado
    if (num > 0){ // verifica que el número sea positivo
        printf("\n serie de ULAM \n"); // imprime encabezado de la serie
        printf("%d \t", num); // imprime el primer número de la serie
        while (num != 1){ // mientras num no sea 1
            if (pow(-1, num) > 0){ // si num es par
                num = num / 2; // divide num entre 2
            }
            else { // si num es impar
                num = num * 3 + 1; // multiplica num por 3 y suma 1
            }
            printf("%d \t", num); // imprime el número resultante
        }
    }
    else{
        printf("\n num debe ser un entero positivo"); // si num no es positivo, imprime un mensaje de error
    }
}
