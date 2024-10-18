#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    char p1, p2, p3 = "$";
    int a = 1;
    putchar(p1);
    printf("\n el caracter p3 es: ");
    putchar(p3);
    printf("\n");
    printf("\ningrese otro caracter: ");
    fflush(stdin);
    scanf("%c", p2);
    printf("%c", p2);
}
