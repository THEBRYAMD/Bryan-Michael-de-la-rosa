#include <stdio.h>

/*ESTE CODIGO RESIVE LOS DATOS DE UN ALUMNO DE UNA UNIVERSIDAD PRIVADA, ESTOS DATOS SON: LA MATRICULA, LA CARRERA,
EL SEMESTRE Y EL PROMEDIO PARA DETERMINAR SI EL ESTUDIANTE PUEDE SER ASISTENTE DE SU CARRERA*/

void main(){
int mat = 0;
int car = 0;
int sem = 0;
float pro = 0.0;
printf(" ingrese la matricula: ");
scanf("%d", &mat);
printf("  \ningrese la carrera \n1- industrial\n 2-telematica \n 3-computacion \n 4-mecanica \n: ");
scanf("%d", &car);
printf(" \n ingrese el semestre: ");
scanf("%d", &sem);
printf("\n ingrese el promedio :");
scanf("%f", &pro);
switch(car){
case 1: if (sem >=6 && pro >=8.5){
} printf("\n%d %d %5.2f", mat, car, pro);
 break;
 case 2: if (sem >=5 && pro >=9.0){
} printf("\n%d %d %5.2f", mat, car, pro);
 break;
 case 3: if (sem >=6 && pro >=8.8){
} printf("\n%d %d %5.2f", mat, car, pro);
 break;
 case 4: if (sem >=7 && pro >=9.0){
} printf("\n%d %d %5.2f", mat, car, pro);
 break;
 default: printf("\n error en la carrera");
 break;
}
}
