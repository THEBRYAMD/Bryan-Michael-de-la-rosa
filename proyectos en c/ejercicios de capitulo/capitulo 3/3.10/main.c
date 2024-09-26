#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int n = 0;
    int num = 0;
    int spa = 0;
    int sim = 0;
    int cim = 0;
    printf("ingrese el numero de datos que se van a procesar : \t \n");
    scanf("%d", &n);
    if (n > 0){
        for (i = 1; i <= n; i++){
            printf("\n ingrese el numero %d: ", i);
            scanf("%d", &num);
            if (num)
            if(pow(-1, num) > 0){
                spa = spa + num;
            }
            else {
                sim = sim + num;
                cim++;
            }
        }
        printf("\n la suma de los numeros pares es : %d", spa);
        printf("\n el promedio de numeros impares es: %5.2f", (float)(sim/cim));
    }
    else {
        printf("\n el valor n es incorrecto");
    }
}
