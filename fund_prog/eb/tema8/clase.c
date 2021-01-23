#include <stdio.h>
/*
 * Tenemos ficheros de texto (los .txt) o ficheros binarios.
 * En la asignatura veremos los primeros tipos.
 */

// PASOS PARA CREAR UN PROGRAMA EN C CON FICHEROS
//  1. Crear una (o varias) variables manejadores de ficheros (una por cada fichero)
    FILE * f;
//  2. Abrir el fichero antes de usarlo (modos de apertura)
    //  Para lectura (modo "r")

        // Nombre del fichero literal
        f = fopen("datos.txt", "r");

        // Nombre del fichero almacenado en variables tipo cadena
        char nombrefichero [] = "datos.txt";
        f = fopen(nombrefichero, "r");

    //  Para escritura (modo "w")

        // Nombre del fichero literal
        f = fopen("datos.txt", "w");

        // Nombre del fichero almacenado en variables tipo cadena
        char nombrefichero [] = "datos.txt";
        f = fopen(nombrefichero, "w");

    //  Para escritura al final (append) (modo "a")

        // Igual que en escritura pero el modo es "a"

//  3. Comprobar que el fichero se ha abierto correctamente
    if (f == NULL)
        printf("El fichero no se ha podido abrir.\n");
    else {
        // code...
    }

//  4. Esquema de lectura o escritura, según proceda

    // Esquema de recorrido completo de escritura en fichero
    for (i = 0; i < count; i++)
    {
        fprintf(f, "data", <variables>);
        /* code... */
    }
    
    // Esquema de lectura de fichero
    while (!feof(f)){
        // Procesamiento de los datos leídos del fichero
        // Lectura del fichero
    }

        // Leer cualquier tipo de dato
        fscanf(f, "...", punteros);
        // Leer cadenas de caracteres
        char cad [TAM];
        fgets(cad, TAM, f);

//  5. Cerrar el/los fichero/s
    fclose(f);