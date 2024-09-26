#include <stdio.h>

void main() {
int i = 0; // variable para el contador del ciclo
float sal = 0.0; // variable para almacenar el salario ingresado
float nom = 0.0; // variable para acumular el total de la nómina
for (i = 1; i < 16; i++) { // ciclo que itera 15 veces
    printf("\n Ingrese el salario del profesor: \t", i); // pide el salario del profesor
    scanf("%f", &sal); // lee el salario ingresado
    nom = nom + sal; // acumula el salario en nom
}
printf("\n el total de la nomina es : %2f", nom); // imprime el total de la nómina
}
