#include <stdio.h>
#include <math.h>

int exprecion(int, int, int);


void main(void)
{
    int exp, t = 0, p = 0, q = 0;
    exp = exprecion(t, p, q);
    while (exp < 5500)
    {
        while (exp < 5500)
        {
            while (exp < 5500)
            {
                printf("\n t: %d, p: %d, q: %d, resultado %d", t, p, q, exp);
                q++;
                exp = exprecion(t, p, q);
            }
            p++;
            q = 0;
            exp = exprecion(t, p, q);
        }
        t++;
        p = 0;
        q = 0;
        exp = exprecion(t, p, q);
    }
}
