#include <stdio.h>
#include <stdlib.h>

const int tam = 10;
void lectura(int [][tam], int);
void imprime(int [][tam], int);

void main(void)
{
    int mat[tam][tam];
    lectura(mat, tam);
    imprime(mat, tam);
}
void lectura(int a[][tam], int f)
{
    int i, j;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < f; j++)
        {
            printf("ingrese el elemento %d %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void imprime(int a[][tam], int f)
{
    int i, j;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (i == j)
            {
                printf("\ndiagonal %d %d: %d", i, j, a[i][j]);
            }
        }
    }
}
