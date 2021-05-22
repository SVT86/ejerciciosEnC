#include <stdio.h>
#include <unistd.h>
#include "interface.h"

/*CREAR ARCHIVO*/

int newFile (char nombre[]){

    FILE* estado;

    int fd;

    fd = dup (fileno(stdout)); // y esto???

    estado = fopen (nombre,"w");

    if(!estado){
        return 0;
    }

    fclose(estado);


    return 1;
}

int delFile (char nombre[]){

    int exito;

    exito = remove(nombre);

    if(!exito)
        return 0;

    return 1;
}


int writeFile(char nombre[]){
    FILE* archivo;

    archivo = fopen(nombre,"a");

    fprintf(archivo,"HOLA HERMOSO MUNDO DEL LENGUAJE C.");

    fclose(archivo);

    return 1;
}

int renameFile(char anterior[], char nuevo[]){
    int resulta;

    resulta = rename(anterior,nuevo);

    return resulta;
}