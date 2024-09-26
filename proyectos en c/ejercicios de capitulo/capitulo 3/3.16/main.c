#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;// inicializa la variable i con 1
    int b = 0;// inicializa la variable b con 0
    int c = 1;// inicializa el contador de términos, empezando con 1
    double res = 0; //inicializa una variavle double res con 0
    res = 4.0 / i; // Calcula el primer término de la serie 4 / 1
    while ((fabs (3.1415 - res)) > 0.0005){// Mientras la diferencia entre Pi aproximado (3.1415) y el valor de 'res' sea mayor a 0.0005
        i +=2;// Incrementa el valor de i en 2 para obtener el siguiente número impar

        if (b){
            res +=(double)(4.0 / i);// Alterna 'b' a 0 para que en la siguiente iteración sume
            b = 0; // Alterna 'b' a 0 para que en la siguiente iteración suma
        }
        else {// Si 'b' es 1, resta el siguiente término
            res -= (double)(4.0 / i);// Resta el siguiente término de la serie: 4 / i
            b = 1;// Alterna 'b' a 1 para que en la siguiente iteración reste
        }
        c++; // Incrementa el contador de términos
    }
    printf("\n numero de terminos: %d", c);// Imprime el número de términos necesarios para alcanzar la precisión deseada
}
