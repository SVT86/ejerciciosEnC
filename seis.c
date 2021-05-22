#include <stdio.h>
#include "interface.h"

int main(int argc, char **argv)
{

    char nameFile[] = "prueba.txt";
    char nuevoNombre[] = "nuevoFile.txt";

    newFile(nameFile);

    getchar();
    printf("Escribir en el archivo");
    writeFile(nameFile);

    getchar();
    printf("Renombra archivo.");
    renameFile(nameFile, nuevoNombre);

    getchar();
    printf("Borrar %s.\n", nameFile);
    delFile(nuevoNombre);

    return 0;
}