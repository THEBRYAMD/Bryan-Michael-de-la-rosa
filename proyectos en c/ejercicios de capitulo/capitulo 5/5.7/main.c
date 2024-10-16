#include <stdio.h>
#include <stdlib.h>

void lectura(int *, int);
void imprime(int *, int);
void elimina(int *, int *);

void main(void)
{
    int tam, arre[100];
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);
    }
    while (tam > 100 || tam < 1);
    {
        lectura( arre, tam);
        elimina( arre, &tam);
        imprime(arre, tam);
    }
    void lectura(int a[], int t)
    {
        printf("\n");
        int i;
        for( i = 0; i < t; i++)
        {
            printf("ingrese el elemento %d: ", i+1);
            scanf("%d, &a[i]");
        }
    }
}
void imprime(int a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("\n a[%d]: %d",i,a[i]);
    }
}
void elimina (int a[], *t)
{
    int i = 0, k, l;
    while(i < (*t-1))
    {
        if (a[i] == a[k])
        {
            for (l = k; l< (*t -1); l++)
            {
                a[l] = a[l+1];
            }
            *t = *t - 1;
        }
        else
        {
            k++;
        }
    }
    i++;
}
