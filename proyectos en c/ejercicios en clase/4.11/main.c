#include <stdio.h>
#include <stdlib.h>

int mad(int);

void main(void)
{
    int num, res;
    printf("\n ingrese el numero: ");
    scanf("%d", &num);
    res = mad(num);
    printf("\n el mayor divisor de %d es: %d", num, res);
}

int mad(int n1)
{
    int i = ( n1 / 2);
    while (n1 % i)
        return i;
}
