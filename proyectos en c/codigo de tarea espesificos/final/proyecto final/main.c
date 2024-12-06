#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
1. Estructura alumno - Nombre Char[] - Promedio float - Carrera Char[]
2. Menu - Nuevo Archivo - Abrir con nombre - Guardar con nombre - Buscar Seleccionar renglon.
3. Si selecciona buscar entonces seleccionar el renglon de busqueda.
4. Que pueda abrir un archivo de datos.
5. Que podamos buscar un nombre en el archivo segun renglon.
6. Poder agregar nuevos record.
*/

// Función para crear un nuevo curso
void crear_curso()
{
    char cur[20];           // Variable para almacenar el nombre del curso
    FILE *archivo;          // Puntero al archivo
    printf("ingrese el nombre del nuevo curso: \n"); // Solicitar el nombre del curso
    scanf("%s", cur);       // lee el nombre del curso ingresado por el usuario
    strcat(cur, ".txt");    // añade la extensión ".txt" al nombre del archivo
    archivo = fopen(cur, "w"); // crea un archivo nuevo en modo escritura
    if (archivo == NULL)    // verificar si hubo error al crear el archivo
    {
        perror("Error al crear el curso"); // imprime el mensaje de error
        return;            // Salir de la funcion
    }
    else
    {
        printf("Curso '%s' agregado con exito.\n", cur); // confirma que se creo
    }
    fclose(archivo);        // Cerrar el archivo
}

// funcion para agregar un estudiante a un curso
void agregar_estudiante()
{
    char estudiante[30];    // variable para el nombre del estudiante
    float calificacion = 0.0; // variable para la calificacion
    char carrera[30];       // variable para la carrera
    char cur[20];           // variable para el nombre del curso
    FILE *archivo;          // Puntero al archivo
    printf("curso del estudiante:\n"); // pide el curso
    scanf("%s", cur);       // lee el nombre del curso
    strcat(cur, ".txt");    // añade la extensión ".txt" al nombre del curso
    archivo = fopen(cur, "a"); // abre el archivo en modo de adicion
    if (archivo == NULL)    // verifica si hubo error al abrir el archivo
    {
        perror("error al abrir el archivo del curso"); // imprime el mensaje de error
        return;            // sale de la funcion
    }
    printf("nombre del estudiante:\n"); // pide el nombre del estudiante
    scanf("%s", estudiante); // lee el nombre del estudiante
    printf("la calificación del estudiante:\n"); // pide la calificacion
    scanf("%f", &calificacion); // lee la calificacion
    printf("la carrera del estudiante:\n"); // solicitar la carrera
    scanf("%s", carrera); // leer la carrera
    // guardar los datos del estudiante en el archivo
    fprintf(archivo, "estudiante: %s, calificacion: %.2f, carrera: %s\n", estudiante, calificacion, carrera);
    printf("Datos del estudiante guardados con éxito en '%s'.\n", cur); // confirma qye se guardo
    fclose(archivo);        // cierra el archivo
}

// funcion para buscar un estudiante por su nombre en un curso
void buscar_estudiante_por_nombre()
{
    char nomb[30];          // variable para el nombre del estudiante a buscar
    char cur[30];           // variable para el nombre del curso
    char linea[256];        // buffer para leer líneas del archivo
    FILE *archivo;          // puntero al archivo
    printf("ingrese el curso del estudiante:\n"); // solicitar el curso
    scanf("%s", cur);       // lee el nombre del curso
    strcat(cur, ".txt");    // añade la extensión ".txt"
    archivo = fopen(cur, "r"); // abre el archivo en modo lectura
    if (archivo == NULL)    // verifica si hubo error al abrir el archivo
    {
        perror("error al abrir el archivo del curso"); // imprime el mensaje de error
        return;            // sale
    }
    printf("ingrese el nombre del estudiante:\n"); // solicita el nombre del estudiante
    scanf("%s", nomb);      // lee el nombre del estudiante
    for (int i = 0; nomb[i]; i++) // convierte el nombre ingresado con letras minusculas
    {
        nomb[i] = tolower(nomb[i]);
    }
    int encontrado = 0;     // variable para indicar si se encontro el estudiante
    printf("Buscando coincidencias para '%s' en el curso '%s':\n", nomb, cur);
    while (fgets(linea, sizeof(linea), archivo)) // lee línea por linea
    {
        char linea_minuscula[256]; // buffer para la linea en minusculas
        strcpy(linea_minuscula, linea); // Copiar la linea original
        for (int i = 0; linea_minuscula[i]; i++) // Convertir la línea a minusculas
        {
            linea_minuscula[i] = tolower(linea_minuscula[i]);
        }
        if (strstr(linea_minuscula, nomb) != NULL) // verificar si la linea contiene el nombre
        {
            printf("  %s", linea); // imprimir la linea encontrada
            encontrado = 1; // indicar que se encontro una coincidencia
        }
    }
    if (!encontrado)        // si no se encontraron coincidencias
    {
        printf("No se encontraron coincidencias para '%s' en el curso '%s'.\n", nomb, cur); //imprime que no se encontraron coinsidencias
    }
    fclose(archivo);        // cierra el archivo
}

// funcion principal que muestra el menú y maneja las opciones
int main()
{
    int op = 0;             // variable para almacenar la opcion seleccionada
    do
    {
        // Mostrar el men
        printf(" \menu del centro/ \n que decea hacer:\n 1- crear un archivo del curso:\n 2- agregar estudiante al curso\n 3- buscar estudiante\n 4- salir \n");
        scanf("%d", &op);   // lee la opcion ingresada por el usuario

        switch (op)         // evaluar la opción seleccionada
        {
        case 1:
            crear_curso();  // llama a la funcion para crear un curso
            break;
        case 2:
            agregar_estudiante(); // llama a la funcion para agregar un estudiante
            break;
        case 3:
            buscar_estudiante_por_nombre(); // llama a la funcion para buscar un estudiante
            break;
        case 4:
            printf("saliendo\n"); // se cierra el programa
            break;
        default:
            printf("ingresaste algo que no es valido, lea bien y elija.\n"); // mensaje de error para opciones invalidas
            break;
        }
    } while (op != 4);      // repetir mientras no se seleccione la opcion de salir
    return 0;               // FIN CON TO LO DIENTE
}
