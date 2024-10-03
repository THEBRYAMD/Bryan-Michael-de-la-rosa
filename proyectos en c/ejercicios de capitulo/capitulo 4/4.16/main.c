#include <stdio.h>
#include <stdlib.h>
void acuten(float);
void maxima(float, int);
void minima(float, int);

float act = 0.0;
float max = -50.0;
float min = 60.0;
int hmax, hmin;

void main(void)
{
    float tem;
    int i;
    for (i = 1; i <= 24; i++)
    {
        printf("\n ingresa la temperatura de la hora %d: ", i);
        scanf("%f", &tem);
        acutem(tem);
        maxima(tem, i);
        minima(tem, i);
    }

    printf("\n promedio del dia: %5.2f", (act /24));
    printf("\n maxima del dia: %5.2f \thora: %d", max, hmax);
    printf("\n minima del dia: %5.2f \thora: %d", min, hmin);
}
void acutem(float t)
{
    act+= t;
}
void maxima(float t, int h)
{
    if(max < t)
    {
        max = t;
        hmax = h;
    }
}
void minima(float t, int h)
{
    if (min > t)
    {
        min = t;
        hmin = h;
    }
}
