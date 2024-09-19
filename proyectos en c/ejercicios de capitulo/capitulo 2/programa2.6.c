#include <stdio.h>

/* EL PROGRAMA RESIVE COMO DATO EL NIVEL DE UN PROFESOR, E INCREMENTA SU SALARIO EN FUNCION DE LA TABLA 2.3*/

void main(){
float sal = 0.0;
int niv = 0;
printf("ingrese el nivel academico del profesor: ");
scanf("%d", &niv);
printf("ingrese el salario: ");
scanf("%f", &sal);
/*switch(niv){
printf(ingrese el salario: );
scanf("%f", &sal);
}*/
switch(niv){
case 1: sal = sal * 1.0035; break;
case 2: sal = sal * 1.0041; break;
case 3: sal = sal * 1.0048; break;
case 4: sal = sal * 1.0053; break;
}
printf("\n\n nivel: %d \t nuevo salario: %8.2f", niv, sal);
}
