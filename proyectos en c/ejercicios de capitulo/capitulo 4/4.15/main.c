#include <stdio.h>
#include <stdlib.h>

int productoria(int);

void main(void)
{
    int num;
    do
    {
        printf("\n ingresa el numero el cual quieres calcular productoeia: ");
        scanf("%d", num);
    }
    while (num > 100 || num < 1);{
    printf("\n la productoria de %d es: %d", num, productoria(num));
}
}
int productoria(int n)
{
int i, pro = 1;
for (i = 1; i <= n; i++)
{
    pro *= i;
    return (pro);
}
}
