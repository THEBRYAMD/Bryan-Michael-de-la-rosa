#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void imprime( int *tab, int fil, int col, int ultNum )//se empieza creando variables locales dentro de la funcion imprime (abajo se explican para que se usan cada una)
{
    /*
    tab: apunta a la matriz que representa las torres
    fil: numero de filas
    col: numero de discos
    disc: cantidad de discos usados
    ultNum;	tamano del disco mas grande
    */

    int f, c;//estas variables son para limitar los bucles for
    int i, esp;// la i es otra variable para moverse en el bucle for mientras que esp es para guardar los espacios en blanco entre los discos

    for( c=col-1; c >= 0; c-- )// bucle que se mueve por las columnas
    {
        for( f=0; f < fil; f++ )//se mueve por las filas
        {
            esp = ( ultNum - tab[col*f+c] )/2;//guardamos los espacios en blanco (creo) en la variable esp

            for( i=0; i < esp; i++ )//se mueve para imprimir espacio dondeno hay espacio vacio en la matris
                printf( " " );// lo imprime en la consola

            for( i=0; i < tab[col*f+c]; i++ )// se mueve por las columnas colocando * donde hay discos
                printf( "*" );//imprime * donde hay disco

            for( i=0; i < esp; i++ )//se mueve para imprimir espacio
                printf( " " );//imprime espacio vacio

            printf( "\t" );// mueve el cursor para imprimir al lado
        };

        printf( "\n" );//imprime salto de linea
    };


};

void mueveDisco( int *tab, int fil, int col, int ultNum, int filOrig, int filDest )//las variables son las mismas esepto por "int filOrig, int filDest"
//estas sirven para la variable de origen y la de destino repectivamente
{
    int cO=col-1, cD=col-1;//se crean dos variables mas c0 y cD las cuales tienen como valor el valor de la columna menos 1

    while( cO >= 0  &&  tab[col*filOrig+cO] == 0 )// Se mueve hasta obtener el disco de arriba osea el de menos valor
    {
        cO--;//va reduciendo el valor de c0 de 1 en 1
    };
    if( cO < 0 )//condicional que se cumple cuando c0 es menor que 0
        cO = 0;// lo combierte en 0
// Ahora se calcula cual es la posición libre mas arriba de la fila de destino
    while( cD >= 0  &&  tab[col*filDest+cD] == 0 )
    {
        cD--; // disminuye cD hasta encontrar un espacio ocupado
    };

    tab[col*filDest+cD+1] = tab[col*filOrig+cO]; // mueve el disco de origen a destino
    tab[col*filOrig+cO] = 0; // vacía la posición original

    imprime( tab, fil, col, ultNum ); // actualiza e imprime el tablero
};

void hanoi( int *tab, int fil, int col, int disc, int ultNum, int O, int A, int D )// función recursiva para resolver el problema de Hanoi
{
    /*
    tab: puntero a la matriz de discos
    fil: número de filas
    col: número de columnas
    disc: número de discos
    ultNum: tamaño del disco más grande
    O, A, D: filas origen, auxiliar y destino
    */

    if( disc==1 ) // caso base: si solo queda un disco
    {
        system("cls"); // limpia la consola
        mueveDisco( tab, fil, col, ultNum, O, D ); // mueve el disco directamente
        if(col<=5) delay(4); // pausa dependiendo del numero de discos esta es la 4ta
        else if(col<=10) delay(3);// 3ra pausa
        else if(col<=15) delay(2);// 2da pausa
        else if(col>15) delay(1);// 1er pausa segun los discos
    }
    else // caso recursivo
    {
        hanoi( tab, fil, col, disc-1, ultNum, O, D, A ); // mueve discos a la auxiliar

        system("cls"); // limpia la consola
        mueveDisco( tab, fil, col, ultNum, O, D ); // mueve el disco grande a destino
        if(col<=5) delay(4); // pausa segun el numero de discosesta es la 4ta
        else if(col<=10) delay(3);// 3ra pausa
        else if(col<=15) delay(2);// 2da pausa
        else if(col>15) delay(1);// 1er pausa segun los discos

        hanoi( tab, fil, col, disc-1, ultNum, A, O, D ); // mueve discos de la auxiliar a destino
    };
};

void delay(int tiempo)// función para crear una pausa
{
    int c, d; // variables auxiliares para los bucles
    while(tiempo >= 0) // bucle que se ejecuta mientras tiempo sea positivo
    {
        for (c = 1; c <= 10000; c++) // primer bucle interno
            for (d = 1; d <= 10000; d++) // segundo bucle interno
            {}
        tiempo--; // disminuye el tiempo
    }
}

main() // función principal
{
    int fil=3, col, *tablero = NULL; // inicializa variables
    int f, c, disc=1, ultNum; // variables para filas, columnas y discos

    printf( "Indique el numero de discos: " ); // solicita el número de discos al usuario
    scanf( "%i", &col ); // lee el número de discos
    tablero = (int *)malloc( sizeof(int)*fil*col ); // asigna memoria para el tablero

    for( f=0; f < fil; f++ ) // recorre filas
        for( c=col-1; c >= 0; c-- ) // recorre columnas
            if( f==0 ) // si es la primera fila
            {
                tablero[col*f+c] = disc; // asigna valores a los discos
                disc+=2; // incrementa el valor del disco
            }
            else
                tablero[col*f+c] = 0; // inicializa el resto del tablero en 0

    ultNum = disc; // guarda el tamano del disco más grande

    system("cls"); // limpia la consola
    imprime( tablero, fil, col, ultNum ); // imprime el tablero inicial
    delay(6); // pausa antes de comenzar

    hanoi( tablero, fil, col, col, ultNum, 0, 1, 2 ); // comienza la resolución del problema
};
