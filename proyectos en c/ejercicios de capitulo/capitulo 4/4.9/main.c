#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y)
{
    return(x+y);
}
int resta ( int x, int y)
{
    return (x-y);
}
int control(int (*apf) (int, int), int x, int y)
{
    int res;
    res = (*apf) (x, y);
    return(res);
}

void main(void)
{
    int r1, r2;
    r1 = control (suma, 15, 5);
    r2 = control (resta, 10, 4);
    printf("\n resultado 1: %d", r1);
    printf("\n resultado 2: %d", r2);
    return 0;
}

