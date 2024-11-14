#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *);

void main(void) {
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL) {
        incrementa(ar);
    } else {
        printf("\nel archivo no se puede abrir");
    }
    fclose(ar);
}

void incrementa(FILE *ap) {
    int i, j, t;
    float sum;
    empleado emple;
    t = sizeof(empleado);
    fread(&emple, sizeof(empleado), 1, ap);
    while (!feof(ap)) {
        i = ftell(ap) / t;
        sum = 0;
        for (j=0; j<12; j++)
            sum += emple.ventas[j];
        if (sum > 1000000) {
            emple.salario = emple.salario * 1.10;
            fseek(ap, (i-1)*sizeof(empleado), 0);
            fwrite(&alu, sizeof(alumno), 1, ap);
            fseek(ap, i*sizeof(empleado), 0);
        }
        fread(&emple, sizeof(alumno), 1, ap);
    }
}
