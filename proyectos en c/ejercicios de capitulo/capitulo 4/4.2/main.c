#include <stdio.h>
#include <stdlib.h>

int cubo(void);
int i = 0;

void main(void)
{
    int cub = 0;
    for (i = 1; i <=10; i++){
        cub = cubo ();
        printf("\n el cubo de %d es: %d", i, cub);
    }
}

int cubo(void){
int i = 2;
return (i * i * i);
}
