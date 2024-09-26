#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2; // inicia el contador en 2
    int cam = 1; // controla el incremento alterno
    long sse = 0; // suma de la serie
    while(i <= 2500){ // mientras i sea menor o igual a 2500
        sse = sse + i; // agrega i a la suma total
        printf("\t %d", i); // imprime el número actual
        if (cam){ // si cam es 1
            i += 5; // incrementa i en 5
            cam--; // cambia cam a 0
        }
        else { // si cam es 0
            i += 3; // incrementa i en 3
            cam++; // cambia cam a 1
        }
    }
    printf("\n la suma de la serie es : %ld", sse); // imprime la suma total de la serie
}
