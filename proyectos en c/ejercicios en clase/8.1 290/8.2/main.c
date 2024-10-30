#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};
void lectura (struct alumno *);

void main(void)
{
    struct alumno a0 = {120, "maria", "contabilidad", 8.9, "queretaro"};
    struct alumno *a3, *a4, *a5, a6;
    a3 = &a0;
    a4 = new(struct alumno);
    printf("\ningrese la matricula del alumno 4: ");
    scanf("%d", &(*a4).matricula);
    fflush(stdin);
    printf("\ningrese el nombre del alumno 4: ");
    gets(a4->nombre);
    printf("\ningrese la carrera del alumno 4: ");
    gets((*a4).carrera);
    printf("ingrese el promedio del alumno 4: ");
    scanf("%f", &a4->promedio);
    fflush(stdin);
    printf("ingrese la direccion del alumno 4: ");
    gets(a4.direccion);
    a5 = new (struct alumno);
    lectura(a5);
    lectura(&a6);
    printf("\n datos del alumno 3\n");
    printf("%d\t%a\t%s\t%2.f\t%s", a3-> matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);
    printf("\n datos del alumno 5\n");
    printf("%d\t%s\t%s\t%f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);
    printf(”\nDatos del alumno 6\n”);
    printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);
}
void Lectura(struct alumno *a)
{
    printf("\nIngrese la matrícula del alumno: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("ingrese el nombre del alumno: ");
    gets(a->nombre);
    fflush(stdin);
    printf("ingrese la carrera del alumno: ");
    gets((*a).carrera);
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("ingrese la dirección del alumno: ");
    gets(a->direccion);
}
