#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // variable i con valor 0
    int n = 0; // variable n con valor 0
    int num = 0; // variable num con valor 0
    int sum = 0; // variables sum para sumar con valor 0
    printf("Ingrese el numero de datos: \t \n"); // pide cu�ntos n�meros se van a ingresar
    scanf("%d", &n); // guarda el n�mero de datos
    for (i = 1; i <= n; i++){ // bucle para iterar por cada n�mero
        printf("ingrese el dato numero %d: \t \n", i); // pide el n�mero i
        scanf("%d", &num); // guarda el n�mero ingresado
        if (num > 0){ // si el n�mero es positivo
            sum = sum + num; // suma el n�mero a la variable sum
        }
    }
    printf(" la suma de los numeros positivos es: %d", sum); // imprime la suma de los n�meros positivos
    return 0; // finaliza el programa
}
