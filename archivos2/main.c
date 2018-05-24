#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int numero;

    /*miArchivo=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivos2\\prueba1.txt","w");

    fwrite(&numero,sizeof(int),1,miArchivo);
    ///recive origen del dato como scanf (&numero),el peso en bits del dato,camtidad e datos a escribir,el string de datos o puntero a file

    fclose(miArchivo);*/

    miArchivo=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivos2\\prueba1.txt","r");

    fread(&numero,sizeof(int),1,miArchivo);
    ///recive destino del dato como scanf (&numero),el peso en bits del dato,camtidad e datos a escribir,el string de datos o puntero a file o origen
    fclose(miArchivo);
    printf("numero: %d",numero);
    return 0;
}
