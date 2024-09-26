#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador de iteraciones
    int pri = 0; // primer número de la secuencia
    int seg = 1; // segundo número de la secuencia
    int sig = 0; // siguiente número de la secuencia
    printf("\t %d \t %d", pri, seg); // imprime los dos primeros números
    for(i = 3; i < 50; i++){ // genera los siguientes números hasta el 50
        sig = pri + seg; // calcula el siguiente número de fibonacci
        pri = seg; // actualiza pri al valor de seg
        seg = sig; // actualiza seg al valor de sig
        printf("\t %d", sig); // imprime el siguiente número
    }
}

