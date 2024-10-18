#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad0[] = "buenos dias";
    char cad1[20] = "hola";
    char cad2[] = "mexico";
    char cad3[] = {'b', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
    char cad4[20], cad5[20], cad6[20];
    printf("\nla cadena cad0 es: ");
    puts(cad0);
    printf("\nla cadena cad1 es: ");
    printf("%s", cad1);
    printf("\nla cadena cad2 es: ");
    puts(cad2);
    printf("\nla cadena cad3 es: ");
    puts(cad3);
    printf("\ningrese una linea de texto se lee con gets: \n");
    gets(cad4);
    printf("\nla cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);
    printf("\ningrese una linea de texto se lee con scanf: \n");
    scanf("%s", cad5);
    printf("\nla cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);
    char p;
    int i = 0;
    printf("\ningrese una linea de texto se lee cada caracter con getchar: \n");
    while ((p = getchar()) != '\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf("\nla cadena cad6 es: ");
    puts(cad6);
}
