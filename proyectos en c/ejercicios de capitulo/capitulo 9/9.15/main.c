#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void minymay(FILE *);

void main(void)
{
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL)
    {
        minymay(ap);
        fclose(ap);
    }
    else
    {
        printf("no se puede abrir el archivo");
    }
}
void minymay(FILE *ap1)
{
    char cad[30];
    int i, mi = 0, ma = 0;
    while (!feof(ap1))
    {
        fgets(cad,30,ap1);
        i=0;
        while (cad[i] != '\0')
        {
            if (islower(cad[i]))
            {
                mi++;
            }
            else if (isupper(cad[i]))
            {
                ma++;
            }
            i++;
        }
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}