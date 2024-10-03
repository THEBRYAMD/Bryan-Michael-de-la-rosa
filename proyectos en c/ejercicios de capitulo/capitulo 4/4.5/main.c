#include <stdio.h>
#include <stdlib.h>

int cubo (int);

void main(void)
{
    int i = 0;
    for (i = 1; i <= 10; i++){
        printf("\n el cubo de 1 es: %d", cubo(i));
    }
}
int cubo(int k)
{
return (k*k*k);
}
