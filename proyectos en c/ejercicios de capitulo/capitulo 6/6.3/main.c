#include <stdio.h>
#include <stdlib.h>

const int f = 8, c = 2, p = 5;
void lectura(int [][c][p], int, int, int);
void funcion1(int [][c][p], int, int, int);
void funcion2(int [][c][p], int, int, int);
void funcion3(int [][c][p], int, int, int);

void main(void)
{
    int uni[f][c][p];
    lectura(uni, f, c, p);
    funcion1(uni, f, c, p);
    funcion2(uni, f, c, p);
    funcion3(uni, 6, c, p);
}

void lectura(int a[][c][p], int fi, int co, int pr)
{
    int k, i, j;
    for (k = 0; k < pr; k++) {
        for (i = 0; i < fi; i++) {
            for (j = 0; j < co; j++) {
                printf("ano: %d\tcarrera: %d\tsemestre: %d ", k+1, i+1, j+1);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}
void funcion1(int a[][c][p], int fi, int co, int pr)
{
    int k, i, j, may = 0, ao = -1, sum;
    for (k = 0; k < pr; k++) {
        sum = 0;
        for (i = 0; i < fi; i++) {
            for (j = 0; j < co; j++) {
                sum += a[i][j][k];
            }
        }
        if (sum > may) {
            may = sum;
            ao = k;
        }
    }
    printf("\n\nano con mayor ingreso de alumnos: %d alumnos: %d", ao+1, may);
}
void funcion2(int a[][c][p], int fi, int co, int pr)
{
    int i, j, may = 0, car = -1, sum;
    for (i = 0; i < fi; i++) {
        sum = 0;
        for (j = 0; j < co; j++) {
            sum += a[i][j][pr-1];
        }
        if (sum > may) {
            may = sum;
            car = i;
        }
    }
    printf("\n\ncarrera con mayor numero de alumnos: %d alumnos: %d", car+1, may);
}
void funcion3(int a[][c][p], int fi, int co, int pr)
{
    int k, j, may = 0, ao = -1, sum;
    for (k = 0; k < pr; k++) {
        sum = 0;
        for (j = 0; j < co; j++) {
            sum += a[fi-1][j][k];
        }
        if (sum > may) {
            may = sum;
            ao = k;
        }
    }
    printf("\n\nano con mayor ingreso de alumnos: %d alumnos: %d", ao+1, may);
}
