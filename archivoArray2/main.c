#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5]={1,5,3,7,8};

   /* miArchivo=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivoArray2\\prueba.txt","w");

    fwrite(lista,sizeof(int),5,miArchivo);

    fclose(miArchivo);*/
    miArchivo=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivoArray2\\prueba.txt","r");

    fread(lista,sizeof(int),5,miArchivo);

    fclose(miArchivo);

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }
    return 0;
}
