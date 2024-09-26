#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador del bucle for
    int n = 0;  // número de lanzamientos
    float sla = 0.0; // suma de los lanzamientos
    float lan = 0.0; // valor de cada lanzamiento
    do {
        printf("ingrese el numero de lanzamientos: \t");
        scanf("%d", &n); // lee el número de lanzamientos
    } while(n < 1 || n > 11); // valida que n esté entre 1 y 11
    for(i = 1; i <= n; i++) { // ciclo para ingresar los lanzamientos
        printf("\n ingrese el lanzamiento %d: ", i);
        scanf("%f", &lan); // lee el valor del lanzamiento
        sla = sla + lan; // acumula los valores de los lanzamientos
    }
    sla = sla / n; // calcula el promedio
    printf("\n el promedio de lanzamientos es: %.2f", sla); // imprime el promedio
}
