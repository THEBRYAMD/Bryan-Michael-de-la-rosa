#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador del bucle
    int n = 0; // n�mero de datos a procesar
    int num = 0; // almacena cada n�mero ingresado
    int spa = 0; // suma de n�meros pares
    int sim = 0; // suma de n�meros impares
    int cim = 0; // contador de n�meros impares
    printf("ingrese el numero de dats que se van a procesar: \t \n"); // pide cu�ntos datos procesar
    scanf("%d", &n); // guarda el n�mero de datos
    if (n > 0){ // verifica que n sea positivo
        for(i = 1; i <= n; i++);{ // bucle para iterar por cada n�mero
            printf("ingrese el numero %d: \n", i); // pide el n�mero i
            scanf("%d", &num); // guarda el n�mero ingresado
            if (num){ // verifica que el n�mero no sea cero
                if (pow(-1, num) > 0){ // si el n�mero es par
                    spa = spa + num; // suma a spa
                }
                else{ // si el n�mero es impar
                    sim = sim + num; // suma a sim
                    cim++; // incrementa contador de impares
                }
                printf("la suma de los numeros pares es: %d", spa); // imprime la suma de pares
                printf("\n el promedio de los numeros impares es: de %5.2f", (float)(sim / cim)); // imprime el promedio de impares
            }
            else{
                printf("\n el valor de n es incorrecto"); // mensaje si el n�mero es cero
            }
        }
    }
}
