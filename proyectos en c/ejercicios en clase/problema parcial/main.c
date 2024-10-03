#include <stdio.h>
#include <stdlib.h>


int main()
{
    int lmin = 0;
    int lmax = 0;
    float cost = 0.0;
    float conb = 0.0;

    printf("\n\n ingrese los litros minimos que su vehiculo necesita cada 100Km: ");
    scanf("%d", &lmin);
    printf("\n ingrese los litros maximos que su vehiculo necesita cada 100km: ");
    scanf("%d", &lmax);
    printf("\n ingrese el precio del combustible por galon: ");
    scanf("%f", &conb);
printf("\n consumo L/100km | precio por km");
    for( lmin; lmin <= lmax; lmin++)
    {
        cost = lmin / 3.78;
        cost = cost * conb;
        cost = cost / 100;
        printf("\n| %dL            =       %5.2f pesos |", lmin, cost);
        cost = 0.0;
    }
    return 0;
}
