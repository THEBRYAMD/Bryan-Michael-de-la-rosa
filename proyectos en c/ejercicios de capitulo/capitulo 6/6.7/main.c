#include <stdio.h>
#include <stdlib.h>

void lectura1(int [15][12]);
void lectura2(float [], int);
void funcion1(int [][12], int, int, float *, float *);
void funcion2(float *, int);
void funcion3(float *, int);

void main(void)
{
    int fab[15][12] = {0};
    float cos[15], ven[15];
    lectura1(fab);
    lectura2(cos, 15);
    funcion1(fab, 15, 12, cos, ven);
    funcion2(ven, 15);
    funcion3(ven, 15);
}

void lectura1(int a[][12])
{
    int mes, pro, can;
    printf("\ningrese mes, tipo de producto y cantidad vendida: ");
    scanf("%d %d %d", &mes, &pro, &can);
    while (mes != -1 && pro != -1 && can != -1) {
        a[mes-1][pro-1] += can;
        printf("ingrese mes, tipo de producto y cantidad vendida: ");
        scanf("%d %d %d", &mes, &pro, &can);
    }
}
void lectura2(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("ingrese costo del producto %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}
void funcion1(int a[][12], int f, int c, float v1[], float v2[])
{
    int i, j, sum;
    printf("\n");
    for (i = 0; i < f; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        v2[i] = v1[i] * sum;
        printf("\ntotal de ventas del producto %d: %8.2f", i + 1, v2[i]);
    }
}
void funcion2(float a[], int c)
{
    int i;
    float sum = 0.0;
    for (i = 0; i < c; i++) {
        sum += a[i];
    }
    printf("\n\ntotal de ventas de la fabrica: %.2f", sum);
}
void funcion3(float a[], int c)
{
    int i, tpr = 0;
    float ven = a[0];
    for (i = 1; i < c; i++) {
        if (ven < a[i]) {
            tpr = i;
            ven = a[i];
        }
    }
    printf("\n\ntipo de producto mas vendido: %d \t ventas: %.2f", tpr + 1, ven);
}
