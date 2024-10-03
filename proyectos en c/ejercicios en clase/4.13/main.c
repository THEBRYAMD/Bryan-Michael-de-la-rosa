#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void parimp(int, int *, int *);

void main(void)
{
    int i, n, num, par = 0, imp = 0;
    printf("\n ingresa el numero de datos: ");
    scanf("%d", &n);
    for (i = 1 ; i <= n; i++);{
        printf("\n ingrese el numero %d:", i);
        scanf("%d", &num);
        parimp(num, &par, &imp);
    }
    printf("\n numero de pares: %d", par);
    printf("\n numero de impares: %d", &imp);
}
void parimp(int num, int *p, int *i)
{
    int res;
    res = pow(-1, num);
    if (res > 0){
        *p += 1;
    }
    else {
            if (res < 0){
                    *i += 1;
        }
    }
}
