#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad[50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        printf("\n¿desea ingresar una cadena de caracteres? si-1 no-0:");
        scanf("%d", &res);
        while (res)
        {
            fflush(stdin);
            printf("ingrese la cadena: ");
            gets(cad);
            fputs(cad, ar);
            printf("\n¿desea ingresar otra cadena de caracteres? si-1 no-0:");
            scanf("%d", &res);
            if (res)
                fputs("\n", ar);
        }
        fclose(ar);
    }
    else
    {
        printf("no se puede abrir el archivo");
    }
}
