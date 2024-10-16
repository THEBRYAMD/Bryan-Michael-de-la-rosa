#include <stdio.h>
#include <stdlib.h>

void lecturam(float a[][12], int f, int c);
void lecturav(float a[], int t);
void f1(float a[][12], int f, int c, float b[], float v[]);
void f2(float a[][12], int f, int c);
void f3(float a[], int f);

void main(void)
{
    float fon[5][12], pre[5], ren[5];
    lecturam(fon, 5, 12);
    lecturav(pre, 5);
    f1(fon, 5, 12, pre, ren);
    f2(fon, 5, 12);
    f3(ren, 5);
}
void lecturam(float a[][12], int f, int c)
{
    int i, j;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Precio fondo %d\t mes %d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
}
void lecturav(float a[], int t)
{
    int i;
    printf("\n");
    for (i = 0; i < t; i++)
    {
        printf("Precio Fondo %d al 31/12/2003: ", i + 1);
        scanf("%f", &a[i]);
    }
}
void f1(float a[][12], int f, int c, float b[], float v[])
{
    int i;
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");
    for (i = 0; i < f; i++)
    {
        v[i] = (a[i][c - 1] - b[i]) / b[i] * 100;
        printf("\nFondo %d: %.2f", i + 1, v[i]);
    }
}

void f2(float a[][12], int f, int c)
{
    int i, j;
    float sum, pro;
    printf("\n\nPROMEDIO ANUALIZADO DE LAS ACCIONES DE LOS FONDOS");
    for (i = 0; i < f; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        pro = sum / c;
        printf("\nFondo %d: %.2f", i + 1, pro);
    }
}

void f3(float a[], int f)
{
    float me = a[0], pe = a[0];
    int m = 0, p = 0, i;
    for (i = 1; i < f; i++)
    {
        if (a[i] > me)
        {
            me = a[i];
            m = i;
        }
        if (a[i] < pe)
        {
            pe = a[i];
            p = i;
        }
    }
    printf("\n\nMEJOR Y PEOR FONDO DE INVERSION");
    printf("\nMejor fondo: %d\tRendimiento: %6.2f", m + 1, me);
    printf("\nPeor fondo: %d\tRendimiento: %6.2f", p + 1, pe);
}
