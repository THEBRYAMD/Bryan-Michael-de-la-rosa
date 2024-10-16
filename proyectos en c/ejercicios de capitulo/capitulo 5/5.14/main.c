#include <stdio.h>
#include <stdlib.h>

const int max = 100;
void lectura(int *, int);
float media(int *, int);
float varianza(int *, int, float);
float desviacion(float);
void frecuencia(int *, int, int *);
int moda(int *, int);

void main(void)
{
    int tam, mod, alu[max], fre[11] = {0};
    float med, var, des;
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);
    }
    while (tam > max || tam < 1);
    lectura(alu, tam);
    med = media(alu, tam);
    var = varianza(alu, tam, med);
    des = desviacion(var);
    frecuencia(alu, tam, fre);
    mod = moda(fre, 11);
    printf("\nmedia: %.2f", med);
    printf("\nvarianza: %.2f", var);
    printf("\ndesviacion: %.2f", des);
    printf("\nmoda: %d", mod);
}
void lectura(int a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("ingrese el elemento %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
float media(int a[], int t)
{
    int i;
    float sum = 0.0;
    for (i = 0; i < t; i++)
    {
        sum += a[i];
    }
    return (sum / t);
}
float varianza(int a[], int t, float m)
{
    int i;
    float sum = 0.0;
    for (i = 0; i < t; i++)
    {
        sum += pow((a[i] - m), 2);
    }
    return (sum / t);
}
float desviacion(float v)
{
    return (sqrt(v));
}
void frecuencia(int a[], int p, int b[])
{
    int i;
    for (i = 0; i < p; i++)
    {
        b[a[i]]++;
    }
}
int moda(int a[], int t)
{
    int i, mod = 0, val = a[0];
    for (i = 1; i < t; i++)
    {
        if (mod < a[i])
        {
            mod = i;
            val = a[i];
        }
    }
    return (mod);
}
