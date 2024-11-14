#include <stdio.h>
#include <stdlib.h

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "r")) != NULL)
    {
        lee(ar);
    }
    else
    {
        printf("\nel archivo no se puede abrir");
    }
    fclose(ar);
}

void lee(FILE *ap)
{
    alumno alu;
    if (fread(&alu, sizeof(alumno), 1, ap) == 1)
    {
        do
        {
            printf("\nmatricula: %d", alu.matricula);
            printf("\tcarrera: %d", alu.carrera);
            printf("\tpromedio: %f\t ", alu.promedio);
            puts(alu.nombre);
        }
        while (fread(&alu, sizeof(alumno), 1, ap) == 1);
    }
    else
    {
        printf("\nno se pudo leer ningun registro.");
    }
}
