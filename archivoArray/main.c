#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int numero;
    int i;
    int lista[5];

    /*miArchivo = fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivoArray\\prueba.txt","w");

    for(i=0;i<5;i++)
    {
        printf("ingrese un numero ");
        scanf("%d", &numero);
        fwrite(&numero,sizeof(int),1,miArchivo);
    }

    fclose(miArchivo);*/

    miArchivo = fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archivoArray\\prueba.txt","r");
    i=0;
    while(!feof(miArchivo))
    {
        fread(&lista[i],sizeof(int),1,miArchivo);
        ///fread(&numero,sizeof(int),1,miArchivo);
        if(feof(miArchivo))
        {
            break;
        }
        ///printf("%d\n",numero);
        i++;
    }

    fclose(miArchivo);

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }
    return 0;
}
