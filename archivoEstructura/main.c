#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    char b;
}eDato;
int main()
{
    FILE* miArchivo;
    eDato d;//={1,'b'};

   // miArchivo=fopen("miBinario.dat","wb");///.dat binario y wb escritura bunaria

   miArchivo=fopen("miBinario.dat","rb");

    /*if(miArchivo!=NULL)
    {
        fwrite(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);
    }*/

    if(miArchivo!=NULL)
    {
        fread(&d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);

        printf("%d--%c",d.a,d.b);
    }
    return 0;
}
