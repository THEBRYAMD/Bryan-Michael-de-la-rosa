#include <stdio.h>
#include <stdlib.h>

const int max = 100;
void lectura(int *, int);
void ordena(int *, int);
void imprime(int *, int);

void main(void)
{
    int tam, vec[max];
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);
    }
    while (tam > max || tam < 1);
    lectura(vec, tam);
    ordena(vec, tam);
    imprime(vec, tam);
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
void imprime(int a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("\na[%d]: %d", i, a[i]);
    }
}
void ordena(int a[], int t)
{
    int aux, l, i;
    for (i = 1; i < t; i++)
    {
        aux = a[i];
        l = i - 1;
        while ((l >= 0) && (aux < a[l]))
        {
            a[l + 1] = a[l];
            l--;
        }
        a[l + 1] = aux;
    }
}
