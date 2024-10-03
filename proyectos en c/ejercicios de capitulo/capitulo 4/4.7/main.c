#include <stdio.h>
#include <stdlib.h>

int f1 (int);

void main(void)
{
    int i, k = 4;
    for (i =1; i <= 3; i++){
        printf("\n valor de k ante de llamar a la funcion: %d", ++k);
        printf("\n valor de k despues de llamar a la funcion %d", f1(k));
    }
}
int f1 (int r)
{
    r += r;
    return (r);
}
