#include <stdio.h>
#include <string.h>

void main(void)
{
    char *cad0 = "hola mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias !!!";
    strcpy(cad1, cad0);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad0 a cad1: %s\n", cad1);
    strcpy(cad1, cad3);
    printf("\n prueva de la funcion strcpy. se copia la cadena cad3 a cad1: %s\n", cad1);
    strcpy(cad1, "xx");
    printf("\n prueva de la funcion strcpy. se copia la cadena xx a cad1: %s\n", cad1);
    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\n prueva de la funcion strcpy. se copian 4 caracteres de cad0 a cad2: %s\n", cad2);
    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
     printf("\n prueva de la funcion strcpy. se copian 3 caracteres de cad3 a cad2: %s\n", cad2);
    strcat(cad0, cad3);
    printf("\n prueva de la funcion strcpy. se copian 3 caracteres de cad3 a cad0: %s\n", cad0);
    strcat(cad1, "yy");
    printf("\n prueva de la funcion strcpy. se incorpora yy a cad1: %s\n", cad1);
    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\n prueva de la funcion strncat. se copian 4 caracteres de cad0 a cad2: %s\n", cad2);
    cad0 = strstr(cad0, "mexico");
    printf("\nPrueba de la función strstr. se trata de localizar la cadena mexico dentro de cad0: %s\n", cad0);
    cad0 = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. se trata de localizar la cadena guatemala dentro de cad0: %s\n", cad0);
}
