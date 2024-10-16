#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ele[5] = {0};
    int i, vot;
    printf("\n ingrese el primer voto (0 para rerminar): ");
    scanf("%d", &vot);

    while(vot){
        if ((vot > 0) && (vot < 6))
        {
            ele[vot-1]++;
        }else
        {
            printf("\n el voto ingresado es incorrecto. \n" );
        }
        printf("\n ingrese el siguiente voto: ");
        scanf("%d", &vot);
    }
    printf("\n \n resultados de la eleccion \n" );
    for ( i = 0; i <= 4; i++){
        printf("\n candidato %d: %d", i+1, ele[i]);
    }
}
