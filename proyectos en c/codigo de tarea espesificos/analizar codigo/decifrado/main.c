#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() //32-126
{
    char frase[100];// se crea una variable tipo char para guardar texto en la variable frase
    int key;// se crea una variable de entero llamada key
    int i,salto=0; // igualmente se crean mas variables de entero llamado i y salto que vale 0

    while(1)//abrimos un bucle que solo acaba cuando sea 0
    {
        system("cls");// borramos o limpiamos la consola
        printf("Ingresa la frase a decifrar: ");// imprimimos para luego escanear la frase que imprimaos
        gets(frase); //escaneamos la frace anteiormente escrita
        do //primera parte del while que siempre se ejecuta primero
        {
            printf("Inserisci la chiave di cifratura: ");// imprimimos para que se ingresen algun valor para la clave
            scanf("%d",&key);//cuardamos ese valor en la variable key
        }
        while(key<1 || key>10);//entramos en oto bucle que va a funcionar siemore y cuando key este enre 1 y 10
        printf("\n\n----------------------------------\nFrase decifrata:\n");// imprimimos texto

        for(i=0; i<strlen(frase); i++,salto=0)// un bucle que se va a desoplazarse con la clave
        {
            if(frase[i]>126-key)//si la frase es menor que key mas 126 entoces se cumple la condicion
            {
                salto=95;// si la condicion se cumple se le asigna el valor de 95 a salto
            }
            printf("%c",frase[i]-key+salto);//finalmente imprimimos el caracter
        }

        printf("\n\n");//imprimimos saltos de linea
        system("pause");// y pausamos antes ade repetir
    }
}
