#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, mat, mamat, memat; // variables para matriculas y control
    float sum, pro, cal, mapro = 0.0, mepro = 11.0; // variables para calificaciones y promedios
    printf("ingrese la matricula del primer alumno: \t"); // pide matricula del primer alumno
    scanf("%d", &mat); // guarda la matricula ingresada
    while (mat){ // mientras la matricula no sea 0
        sum = 0; // reinicia la suma de calificaciones
        for (i = 1; i <= 5; i++){ // recorre las 5 calificaciones
            printf("\n \t ingrese la calificacion del alumno: ", i); // pide calificacion
            scanf("%f", &cal); // guarda la calificacion
            sum += cal; // suma la calificacion
        }
        pro = sum / 5; // calcula el promedio
        printf("\n matricula: %d \t promedio: %5.2f", mat, pro); // muestra matricula y promedio
        if (pro > mapro){ // si el promedio es mayor al mejor promedio registrado
            mapro = pro; // actualiza el mejor promedio
            mamat = mat; // guarda la matricula del mejor promedio
        }
        if (pro < mepro){ // si el promedio es menor al peor promedio registrado
            mepro = pro; // actualiza el peor promedio
            memat = mat; // guarda la matricula del peor promedio
        }
        printf("\n \n ingrese la matricula del siguiente alumno: "); // pide la matricula del siguiente alumno
        scanf("%d", &mat); // guarda la matricula
    }
    printf("\n \n alumno con el mejor promedio: \t %d \t %5.2f", mamat, mapro); // muestra matricula y promedio del mejor alumno
    printf("\n\n alumno con el peor promedio: \t %d \t %5.2f", memat, mepro); // muestra matricula y promedio del peor alumno
}
