#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador del bucle
    int n = 0; // número de datos a procesar
    int num = 0; // almacena cada número ingresado
    int spa = 0; // suma de números pares
    int sim = 0; // suma de números impares
    int cim = 0; // contador de números impares
    printf("ingrese el numero de dats que se van a procesar: \t \n"); // pide cuántos datos procesar
    scanf("%d", &n); // guarda el número de datos
    if (n > 0){ // verifica que n sea positivo
        for(i = 1; i <= n; i++);{ // bucle para iterar por cada número
            printf("ingrese el numero %d: \n", i); // pide el número i
            scanf("%d", &num); // guarda el número ingresado
            if (num){ // verifica que el número no sea cero
                if (pow(-1, num) > 0){ // si el número es par
                    spa = spa + num; // suma a spa
                }
                else{ // si el número es impar
                    sim = sim + num; // suma a sim
                    cim++; // incrementa contador de impares
                }
                printf("la suma de los numeros pares es: %d", spa); // imprime la suma de pares
                printf("\n el promedio de los numeros impares es: de %5.2f", (float)(sim / cim)); // imprime el promedio de impares
            }
            else{
                printf("\n el valor de n es incorrecto"); // mensaje si el número es cero
            }
        }
    }
}
