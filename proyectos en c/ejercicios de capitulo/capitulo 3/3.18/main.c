#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, num, sum, c = 0;// declara variables
    printf("\n ingrese el numero limite: ");// pide un numero limite
    scanf("%d", &num);// guarda el numero ingresado en num
    for(i = 1; i <= num; i ++){ // recorre los numeros desde 1 hasta num
        sum = 0;// reinicia la suma para cada numero
        for ( j = 1; j <= (i / 2); j++){// recorre posibles divisores de i con el blucle for
            if ((i % j) == 0){// si j es divisor de i
                sum += j;// suma j a sum
            }
        }
        if (sum == i){// si la suma de divisores es igual a i
            printf("\n %d es un numero perfecto", i);// imprime que i es perfecto
            c++;// incrementa el contador de numeros perfectos
        }
    }
    printf("\n entre 1 y %d hay %d numeros perfectos", num, c);// imprime cuantos numeros perfectos hay
}
