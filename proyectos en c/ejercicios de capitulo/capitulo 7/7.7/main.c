#include <stdio.h>
#include <string.h>

void main(void)
{
    int i;
    char cad0[20] = "hola mexico";
    char cad1[20] = "hola guatemala";
    char cad2[20] = "hola venezuela";
    char cad3[20] = "hola mexico";
    char *c, c3;
    i = strcmp(cad0, cad1);
    printf("\nresultado de la comparacion �cad0 y cad1�: %d", i);
    i = strcmp(cad0, cad2);
    printf("\nresultado de la comparacion �cad0 y cad2�: %d", i);
    i = strcmp(cad0, cad3);
    printf("\nresultado de la comparacion �cad0 y cad3�: %d", i);
    i = strlen(cad0);
    printf("\nlongitud cadena cad0: %d", i);
    i = strlen(cad1);
    printf("\nlongitud cadena cad1: %d", i);
    c = strchr(cad1, 'g');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nel valor de c3 es: %c", c3);
    }
    c = strchr(cad2, 'v');
    if (c != NULL)
    {
        c3 = *c;
        printf("\nel valor de c3 es: %c", c3);
    }
}
