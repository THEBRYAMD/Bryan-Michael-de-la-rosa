#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0;
    cad0 = "argentina";
    puts(cad0);
    cad0 = "brasil";
    puts(cad0);
    char *cad1 = "";
    gets(cad1);
    char cad2[20] = "mexico";
    puts(cad2);
    gets(cad2);
    puts(cad2);
    cad2[10] = "Guatemala";
}
