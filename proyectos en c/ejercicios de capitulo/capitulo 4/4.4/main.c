#include <stdio.h>
#include <stdlib.h>

int f1 (void);
int f2 (void);
int f3 (void);
int f4 (void);
int k = 3;

void main(void)
{
    int i = 0;
    for( i = 1; i<=3; i++){
        printf("\n el resultado de la funcion f1 es: %d", f1());
        printf("\n el resultado de la funcion f2 es: %d", f2());
        printf("\n el resultado de la funcion f3 es: %d", f3());
        printf("\n el resultado de la funcion f4 es: %d", f4());
    }
}
int f1(void){
k += k;
return (k);
}
int f2(void){
int k = 1;
k ++;
return (k);
}

int f3(void){
static int k = 8;
k += 2;
return (k);
}

int f4(void){
int k = 5;
k = k + k;
return (k);
}

