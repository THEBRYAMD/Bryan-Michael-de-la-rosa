#include <stdio.h>
#include <stdlib.h>

void mayor ( float, float, float);
void min (void)
{
    int i;
    float gol, pac, car, agol = 0, apac = 0, acar = 0;
    for(i = 1; i <= 12; i++)
    {
        printf("\n ingrese las lluvias del mes %d", i);
        printf("\n regiones golfom pasifico y caribe: ");
        scanf("%f %f %f", &gol, &pac, &car);
        agol += gol;
        apac += pac;
        acar += car;
    }
    printf("\n promedio de lluvias region golfo: %6.2f", (agol /12));
    printf("\n promedio de lluvias region pasifico: %6.2f", (apac /12));
    printf("\n promedio de lluvias region caribe: %6.2f", (acar /12));
    mayor(agol, apac, acar);
}
void mayor (float r1, float r2, float r3)
{
    if (r1 > r2)
        if (r1 >r3)
        printf("\n region con mayor promedio: Region golfo. promedio: %6.2f", r3 / 12);
    else if (r2 > r3)
        printf("\n region con mayor promedio: region pasifico. promedio: %6.2f", r2 /12);
    else
        printf("\n region con mayor promedio: region caribe. promedio: %6.2f", r3 /12);
}
