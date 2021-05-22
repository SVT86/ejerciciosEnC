#ifndef INTERFACE
#define INTERFACE

/*CREAR ARCHIVO*/

    int newFile(char nombre[]);

/*ADICION ARCHIVO*/

    int writeFile(char nombre[]);

/*BORRAR ARCHIVO*/

    int delFile(char nombre[]);

/*RENOMBRA ARCHIVO*/

    int renameFile(char anterior[], char nuevo[]);

#endif