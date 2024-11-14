#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *);

void main() {
    FILE *ar;
    if ((ar = fopen("ad1.dat", "w")) != NULL) {
        escribe(ar);
    } else {
        printf("\n el archivo no se puede abrir");
    }
    fclose(ar);
}

void escribe(FILE *ap) {
    alumno alu;
    int i = 0, r;
    printf("\n ¿desea ingresar informacion sobre alumnos? (si-1 no-0): ");
    scanf("%d", &r);
    while (r) {
        i++;
        printf("matricula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("nombre del alumno %d: ", i);
        fflush(stdin);
        gets(alu.nombre);
        printf("carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);
        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\n¿desea ingresar informacion sobre mas alumnos? (si-1 no-0): ");
        scanf("%d", &r);
    }
}
