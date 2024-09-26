#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador de iteraciones
    int pri = 0; // primer n�mero de la secuencia
    int seg = 1; // segundo n�mero de la secuencia
    int sig = 0; // siguiente n�mero de la secuencia
    printf("\t %d \t %d", pri, seg); // imprime los dos primeros n�meros
    for(i = 3; i < 50; i++){ // genera los siguientes n�meros hasta el 50
        sig = pri + seg; // calcula el siguiente n�mero de fibonacci
        pri = seg; // actualiza pri al valor de seg
        seg = sig; // actualiza seg al valor de sig
        printf("\t %d", sig); // imprime el siguiente n�mero
    }
}

