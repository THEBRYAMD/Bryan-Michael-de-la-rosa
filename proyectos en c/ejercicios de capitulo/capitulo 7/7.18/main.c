#include <stdio.h>
#include <stdlib.h>

void inverso(char *);

void main(void)
{
    char fra[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    printf("\nescribe la linea de texto en forma inversa: ");
    inverso(fra);
}

void inverso(char *cadena)
{
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
