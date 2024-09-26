#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; // contador de profesores
    float sal = 0.0; // salario ingresado
    float pro = 0.0; // promedio de salarios
    float nom = 0.0; // suma total de salarios
    printf("ingrese el salario del profesor: \n"); // pide el salario del primer profesor
    scanf("%f", &sal); // lee el salario
    do {
        nom = nom + sal; // acumula el salario ingresado
        i = i + 1; // incrementa el contador de profesores
        printf("ingrese el salario del profesor 0 para terminar: \t"); // pide el siguiente salario
        scanf("%f", &sal); // lee el siguiente salario
    } while (sal); // continua el bucle mientras sal no sea 0
    pro = nom / i; // calcula el promedio de salarios
    printf("\n nomina: %.2 \t promedio de salarios: %.2f", nom, pro); // imprime la nómina y el promedio
}
