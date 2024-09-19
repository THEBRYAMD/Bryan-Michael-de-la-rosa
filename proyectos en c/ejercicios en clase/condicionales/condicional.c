#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6. */

void main(){
float pro = 0.0;
printf("ingrese el promedio del alumno: \n");
scanf("%f", &pro);

if (pro>=6){
printf("aprovado");}
return 0;
}
