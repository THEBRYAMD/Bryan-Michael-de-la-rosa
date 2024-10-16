#include <stdio.h>
#include <math.h>

const int max = 100;
void lectura(float *, int);
double suma(float *, int);

int main(void)
{
    float vec[max];
    double res;
    lectura(vec, max);
    res = suma(vec, max);
    printf("\n\nsuma del arreglo: %.2lf", res);
}
void lectura(float a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("ingrese el elemento %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}
double suma(float a[], int t)
{
    int i;
    double aux = 0.0;
    for (i = 0; i < t; i++)
    {
        aux += pow(a[i], 2);
    }
    return aux;
}
