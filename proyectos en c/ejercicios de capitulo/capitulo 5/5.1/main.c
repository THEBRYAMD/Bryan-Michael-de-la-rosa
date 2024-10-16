#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, cue = 0;
    int arre[100];
    for (i = 0; i < 100; i++)
    {
        printf(" ingrese el elemento %d del arreglo: ", i+1);
        scanf("%d", &arre[i]);
    }
    printf("\n ingrese el número que se va a buscar en el arreglo: ");
    scanf("%d", &num);

    for (i = 0; i < 100; i++)
        if (arre[i] == num){
            cue++;
            printf("\n\n el %d se encuentra %d veces en el arreglo", num, cue);
        }
}

