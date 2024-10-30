#include <stdio.h>
#include <string.h>

typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
} ubicacion;

typedef struct
{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo;
} propiedades;

void lectura(propiedades[], int);
void f1(propiedades[], int);
void f2(propiedades[], int);

void main(void)
{
    propiedades propie[100];
    int tam;
    do
    {
        printf("ingrese el numero de propiedades: ");
        scanf("%d", &tam);
    }
    while (tam > 100 || tam < 1);
    lectura(propie, tam);
    f1(propie, tam);
    f2(propie, tam);
}

void lectura(propiedades a[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        printf("\n\tingrese datos de la propiedad %d", i + 1);
        printf("\nclave: ");
        fflush(stdin);
        gets(a[i].clave);
        printf("superficie cubierta: ");
        scanf("%f", &a[i].scu);
        printf("superficie terreno: ");
        scanf("%f", &a[i].ste);
        printf("caracteristicas: ");
        fflush(stdin);
        gets(a[i].car);
        printf("\tzona: ");
        fflush(stdin);
        gets(a[i].ubi.zona);
        printf("\tcalle: ");
        fflush(stdin);
        gets(a[i].ubi.calle);
        printf("\tcolonia: ");
        fflush(stdin);
        gets(a[i].ubi.colo);
        printf("precio: ");
        scanf("%f", &a[i].precio);
        printf("disponibilidad (venta-v renta-r): ");
        scanf(" %c", &a[i].dispo);
    }
}

void f1(propiedades a[], int t)
{
    int i;
    printf("\n\t\tlistado de propiedades para venta en miraflores");
    for (i = 0; i < t; i++)
        if ((a[i].dispo == 'v') && (strcmp(a[i].ubi.zona, "miraflores") == 0))
            if ((a[i].precio >= 450000) && (a[i].precio <= 650000))
            {
                printf("\nclave de la propiedad: ");
                puts(a[i].clave);
                printf("\nsuperficie cubierta: %f", a[i].scu);
                printf("\nsuperficie terreno: %f", a[i].ste);
                printf("\ncaracteristicas: ");
                puts(a[i].car);
                printf("calle: ");
                puts(a[i].ubi.calle);
                printf("colonia: ");
                puts(a[i].ubi.colo);
                printf("precio: %.2f\n", a[i].precio);
            }
}

void f2(propiedades a[], int t)
{
    int i;
    float li, ls;
    char zon[20];
    printf("\n\t\tlistado de propiedades para renta");
    printf("\ningrese zona geografica: ");
    fflush(stdin);
    gets(zon);
    printf("ingrese el limite inferior del precio: ");
    scanf("%f", &li);
    printf("ingrese el limite superior del precio: ");
    scanf("%f", &ls);
    for (i = 0; i < t; i++)
    {
        if ((a[i].dispo == 'r') && (strcmp(a[i].ubi.zona, zon) == 0))
        {
            if ((a[i].precio >= li) && (a[i].precio <= ls))
            {
                printf("\nclave de la propiedad: ");
                puts(a[i].clave);
                printf("\nsuperficie cubierta: %f", a[i].scu);
                printf("\nsuperficie terreno: %f", a[i].ste);
                printf("\ncaracteristicas: ");
                puts(a[i].car);
                printf("calle: ");
                puts(a[i].ubi.calle);
                printf("colonia: ");
                puts(a[i].ubi.colo);
                printf("precio: %.2f", a[i].precio);
            }
        }
    }
}
