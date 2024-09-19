#include <stdio.h>
/* ESTE PROGRAMA INCREMENTA EL PRECIO DE UN PRODUCTO UN 11%
SI ESTE ES MENOR A 1500PESOS*/
void main(){
    float pre = 0.0;
    float npr = 0.0;
printf("ingrese el precio del producto\n");
scanf("%f", &pre);
if (pre > 1500){
    npr = pre * 1.11;
    printf("nuevo precio: %7.2f", npr);
}
}
