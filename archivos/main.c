#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char cadena[50]="hola";

    pArchivo=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivos\\archivo.txt","w");
    if(pArchivo!=NULL)
    {
        fprintf(pArchivo,"%s---%d\n",cadena,156);
        fprintf(pArchivo,"%s---%d\n",cadena,135);
        fclose(pArchivo);
        printf("guardado\n");
    }
    else
    {
        printf("imposible");
    }

    pArchivo=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivos\\archivo.txt","r");

    if(pArchivo!=NULL)
    {
        while(!feof(pArchivo))
        {
            fgets(cadena,50,pArchivo);
            puts(cadena);
        }
        fclose(pArchivo);
    }
    return 0;
}
