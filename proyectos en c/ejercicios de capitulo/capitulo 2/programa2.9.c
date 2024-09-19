#include <stdio.h>
#include <math.h>
/* EL PROGRAMA RESIVE 3 VALORES ENTEROS Y ESTABLESE SI LOS MISMOS SATISFACEN UNA EXPRECION DETERMINADA */

void main(){
float res = 0.0;
int r = 0;
int t = 0;
int q = 0;
printf("ingrese los valores de r, t y q :");
scanf("%d %d %d", &r, &t, &q);
res = pow (r, 4) - pow(t,3) + 4* pow (q,2);
if (res < 820){
    printf(" \n r= %d\t q= %d", r, t, q);
}
}
