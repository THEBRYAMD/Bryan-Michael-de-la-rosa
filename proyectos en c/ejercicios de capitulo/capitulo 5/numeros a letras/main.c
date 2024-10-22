#include <stdio.h>
#include <stdlib.h>

void convertir_a_letras(int numero)
{
    const char *unidades[] =
    {
        "cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"
    };

    const char *decenas[] =
    {
        "cero", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"
    };

    const char *centenas[] =
    {
        "cero", "cien", "docientos", "recientos", "cuatrocientos", "quinientos", "ceicientos", "cetecientos", "ochocientos", "novecientos", "mil pariguallo",
    };

    if (numero < 10)
    {
        printf("%s\n", unidades[numero]);
    }
    else if (numero < 100)
    {
        int decena = numero / 10;
        int unidad = numero % 10;

        if (unidad == 0)
        {
            printf("%s\n", decenas[decena]);
        }
        else
        {
            printf("%s y %s\n", decenas[decena], unidades[unidad]);
        }
    }
    else if (numero < 1001)
    {
        int centena = numero / 100;
        int queda = numero % 100;
        int decena = queda / 10;
        int unidad = queda % 10;

        if (unidad == 0)
        {
            printf("%s %s\n", centenas[centena], decenas[decena]);
        }
        else if (decena == 0)
        {
            printf("%s %s\n",centenas[centena], unidades[unidad]);
        }
        else if ( unidad == 0 && decena ==0)
        {
            printf("%s\n", centenas[centena]);
        }
        else
        {
            printf("%s %s y %s\n",centenas[centena], decenas[decena], unidades[unidad]);
        }
    }
    else
    {
        printf("numero fuera de rango\n");
    }
}

int main()
{
    int numero;
    printf("Introduce un numero de 0 a 1000): ");
    scanf("%d", &numero);

    convertir_a_letras(numero);
}
