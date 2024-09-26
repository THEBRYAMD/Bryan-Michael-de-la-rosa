#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vot = 0; // guarda el voto ingresado
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0; // contadores para cada candidato
    int nu = 0; // contador de votos nulos
    int svd = 0; // total de votos
    float po1, po2, po3, po4, po5, pon; // porcentajes para cada candidato y votos nulos

    printf("ingrese el primer voto: "); // pide el primer voto
    scanf("%d", &vot); // guarda el voto ingresado

    while (vot){ // mientras el voto no sea 0
        switch(vot){ // verifica por quien es el voto
        case 1: c1++; break; // incrementa votos del candidato 1
        case 2: c2++; break; // incrementa votos del candidato 2
        case 3: c3++; break; // incrementa votos del candidato 3
        case 4: c4++; break; // incrementa votos del candidato 4
        case 5: c5++; break; // incrementa votos del candidato 5
        default: nu++; break; // si no es ninguno, cuenta como voto nulo
        }
        printf("\n ingrese el siguiente voto (0 para terminar): "); // pide el siguiente voto
        scanf("%d", &vot); // guarda el nuevo voto
    }

    svd = c1 + c2 + c3 + c4 + c5 + nu; // calcula el total de votos
    po1 = ((float) c1 / svd) * 100; // calcula porcentaje para candidato 1
    po2 = ((float) c2 / svd) * 100; // calcula porcentaje para candidato 2
    po3 = ((float) c3 / svd) * 100; // calcula porcentaje para candidato 3
    po4 = ((float) c4 / svd) * 100; // calcula porcentaje para candidato 4
    po5 = ((float) c5 / svd) * 100; // calcula porcentaje para candidato 5
    pon = ((float) nu / svd) * 100; // calcula porcentaje para votos nulos

    printf("\n total de votos: %d", svd); // imprime el total de votos
    printf("\n\n candidato 1: %d votos -- porcentaje: %5.2f", c1, po1); // imprime resultados candidato 1
    printf("\n candidato 2: %d votos -- porcentaje: %5.2f", c2, po2); // imprime resultados candidato 2
    printf("\n candidato 3: %d votos -- porcentaje: %5.2f", c3, po3); // imprime resultados candidato 3
    printf("\n candidato 4: %d votos -- porcentaje: %5.2f", c4, po4); // imprime resultados candidato 4
    printf("\n candidato 5: %d votos -- porcentaje: %5.2f", c5, po5); // imprime resultados candidato 5
    printf("\n nulos: %d votos -- porcentaje: %5.2f", nu, pon); // imprime resultados de votos nulos
}
