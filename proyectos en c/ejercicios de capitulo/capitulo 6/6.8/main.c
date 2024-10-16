#include <stdio.h>
#include <stdlib.h>

const int max = 50;
void lectura(int [][max], int, int);
void traspuesta(int [][max], int [][max], int, int);
void imprime(int [][max], int, int);

void main(void)
{
    int mat[max][max], tra[max][max];
    int fil, col;

    do
    {
        printf("ingrese el numero de filas de la matriz: ");
        scanf("%d", &fil);
    }
    while (fil > max || fil < 1);

    do
    {
        printf("ingrese el numero de columnas de la matriz: ");
        scanf("%d", &col);
    }
    while (col > max || col < 1);
    lectura(mat, fil, col);
    traspuesta(mat, tra, fil, col);
    imprime(tra, col, fil);
}

void lectura(int a[][max], int f, int c)
{
    int i, j;
    for (i = 0; i < f; i++)
        for (j = 0; j < c; j++)
        {
            printf("ingrese el elemento %d %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
}
void traspuesta(int m1[][max], int m2[][max], int f, int c)
{
    int i, j;
    for (i = 0; i < f; i++)
        for (j = 0; j < c; j++)
            m2[j][i] = m1[i][j];
}
void imprime(int a[][max], int f, int c)
{
    int i, j;
    for (i = 0; i < f; i++)
        for (j = 0; j < c; j++)
            printf("\nelemento %d %d: %d ", i + 1, j + 1, a[i][j]);
}


