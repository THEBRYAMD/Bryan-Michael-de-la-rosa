#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0; // contadores para cada rango de calificaciones
    float cal; // variable para almacenar la calificación
    printf("\n ingrese la calificacion del alumno: "); // pide la calificación inicial
    scanf("%f", &cal); // guarda la calificación ingresada
    while (cal != -1) { // repite mientras la calificación no sea -1
        if (cal < 4) {
            r1++; // cuenta calificaciones en el rango 0..3.99
        } else if (cal < 6) {
            r2++; // cuenta calificaciones en el rango 4..5.99
        } else if (cal < 8) {
            r3++; // cuenta calificaciones en el rango 6..7.99
        } else if (cal < 9) {
            r4++; // cuenta calificaciones en el rango 8..8.99
        } else {
            r5++; // cuenta calificaciones en el rango 9..10
        }
        printf("\ningresa la calificacion del alumno: "); // pide la siguiente calificación
        scanf("%f", &cal); // guarda la nueva calificación
    }
    printf("\n 0..3.99 = %d", r1); // imprime cuántas calificaciones fueron en el rango 0..3.99
    printf("\n 4..5.99 = %d", r2); // imprime cuántas calificaciones fueron en el rango 4..5.99
    printf("\n 6..7.99 = %d", r3); // imprime cuántas calificaciones fueron en el rango 6..7.99
    printf("\n 8..8.99 = %d", r4); // imprime cuántas calificaciones fueron en el rango 8..8.99
    printf("\n 9..10 = %d", r5); // imprime cuántas calificaciones fueron en el rango 9..10
}
