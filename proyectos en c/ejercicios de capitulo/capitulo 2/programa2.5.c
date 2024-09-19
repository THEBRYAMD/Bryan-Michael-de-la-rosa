#include <stdio.h>
#include <math.h>

/* EL PROGRAMA OBTIENE EL RESULTADO DE UNA FUNCION.*/

void main(){
int op = 0.0;
int t = 0.0;
float res = 0.0;
printf("ingrese la opcion del calculo y el valor entero; ");
scanf("%d %d", &op, &t);
switch(op){
case 1: res = t /5;
break;
case 2: res = pow(t,t); // pow es algo de la biblioteca math//
break;
case 3:
case 4: res = 6 * t/2;
break;
default: res = 1 ;
break;
}
printf("\n resultado es: %7.2f", res);
}
