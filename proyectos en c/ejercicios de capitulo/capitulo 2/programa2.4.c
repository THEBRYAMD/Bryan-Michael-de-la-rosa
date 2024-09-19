#include <stdio.h>
/* EL PROGRAMA RESIBE EL PRECIO DE UN PRODUCTO, Y LE INCREMENTA EL PRECIO UN 11% SI ES MENOR A 1500 Y UN 8% SI ES MAYOR O IGUAL */

void main(){
float pre = 0.0;
float npr = 0.0;
printf("ingrese el precio del producto: ");
scanf("%f", &pre);
if (pre < 1500){
    npr = pre * 1.11;
}
else {
    npr = pre * 1.08;
}
printf(" \n el nuevo precio es: %8.2f", npr);

}
