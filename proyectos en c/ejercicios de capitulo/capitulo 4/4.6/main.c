#include <stdio.h>
#include <stdlib.h>

void f1(int *);

void main (void)
{
int i, k = 4;
for(i = 1; i <= 3; i++){
    printf("\n\n valor de k antes de llamar a la funcion: %d", ++k);
    f1(&k);
    printf("\n valor de k despues de llamar a la funcion: %d", k);
}
}
void f1( int *r){
*r += *r;
}
