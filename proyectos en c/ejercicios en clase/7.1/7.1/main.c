#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    char p1, p2, p3 = "$";
    int a = 1;
    while (a)
    {
    printf("\ningrese un caracter: ");
    p1 = getchar();
    if ( p1 > 64 && p1 < 91)
    {
        printf("\n");
        putchar(p1 + 32);
        fflush(stdin);
    }
    else if (p1 > 96 && p1 < 123)
    {
        printf("\n");
        putchar(p1 - 32);
        fflush(stdin);
    }
    else if (p1 > 163 && p1 < 165)
    {
        printf("\n");
        putchar(p1 + 1);
        fflush(stdin);
    }
     else if (p1 > 164 && p1 < 166)
    {
        printf("\n");
        putchar(p1 - 1);
        fflush(stdin);
    }
    else {
        printf(" \n eso no ta pariguallo");
    }
    printf(" \n 0 pa cerrar");
    scanf("%d", &a);
    fflush(stdin);
    }
    /*
        printf("\n el caracter p3 es: ");
        putchar(p3);
        printf("\n");
        printf("\ningrese otro caracter: ");
        fflush(stdin);
        scanf("%c", p2);
        printf("%c", p2); */
}
