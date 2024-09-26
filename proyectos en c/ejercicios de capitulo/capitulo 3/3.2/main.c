#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // variable i con valor 0
    int n = 0; // variable n con valor 0
    int num = 0; // variable num con valor 0
    int sum = 0; // variables sum para sumar con valor 0
    printf("Ingrese el numero de datos: \t \n"); // pide cuántos números se van a ingresar
    scanf("%d", &n); // guarda el número de datos
    for (i = 1; i <= n; i++){ // bucle para iterar por cada número
        printf("ingrese el dato numero %d: \t \n", i); // pide el número i
        scanf("%d", &num); // guarda el número ingresado
        if (num > 0){ // si el número es positivo
            sum = sum + num; // suma el número a la variable sum
        }
    }
    printf(" la suma de los numeros positivos es: %d", sum); // imprime la suma de los números positivos
    return 0; // finaliza el programa
}
