#include <stdio.h>

/*El siguiente redirige la salida a un archivo*/
/*
    USAR FOPEN() Y NO FREOPEN()

*/

int abreArchivo(char nombre[])
{

    FILE *filestream;

    filestream = freopen(nombre,"w", stdout);

    /*ESTO NO VA ACA- xq el stream esta redirigido al archivo*/
    if (!filestream){
        printf("Error al abrir archivo...");
        return 0;

    }
    
    printf("Este contenido se escribe al archivo\n****Me alegra verlo de vuelta señor.\n");
    

    fclose(filestream);

    return 1;

}

int remArchivo(char nombre[]){

    int retorno;

    retorno = remove (nombre);

    if (!retorno)
        printf("Error al borrar archivo.\n");
    
    return retorno;
}

int main (int argc,char** argv){

    int archivo;
    char nombre[]="prueba.txt";

    archivo  = abreArchivo(nombre);

    if (archivo)
        printf("Archivo abierto");

    printf("Borra archivo.\n");

    getchar();
    remArchivo(nombre);
    
    return 0;

}
