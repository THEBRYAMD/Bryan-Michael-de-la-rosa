#include <stdio.h>
/* EL PROGRAMA CALCULA EL PRECIO DEL BOLETO DEL FERROCARIL TENIENDO EN CUENTA LA DISTANCIA Y EL TIEMPO DE PERMANENCIA DEL PASAJERO*/

void main() {
int dis = 0;
int tiem = 0;
float bol = 0.0;
printf("ingrese la distancia y el tiempo de permanencia: ");
scanf("%d %d", &dis, &tiem);
if ((dis * 2 > 500) && (tiem > 10)){
    bol = dis * 2 *0.19 *0.8;
}else
bol= dis * 2 * 0.19;
printf("\n \n costo del boleto: %7.2f", bol);
}
