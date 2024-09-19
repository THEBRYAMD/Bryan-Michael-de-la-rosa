#include <stdio.h>
//este programa, al recibir el promedio de un alumno en un curso universitario, escribe aprovado si el promedio es mayor a 6, de lo contrario esta reprobado//
void main(){
float pro = 0.0;
printf("ingrese el promedio del alumno ");
scanf("%f", &pro);
if(pro >=6){
    printf("\n Alumno aprobado");
}
else {
    printf("\n Alumno reprovado");
}
}

