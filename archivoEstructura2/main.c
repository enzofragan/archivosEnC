#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    char b;
}eDato;
int main()
{
    eDato d[2]= {{3,'A'},{4,'C'}};
    eDato d3;//={1,'d'};
    eDato d2[2];
    FILE* miArchivo;


    miArchivo = fopen("numero.dat", "wb");

    fwrite(d, sizeof(eDato), 2, miArchivo);

    //fwrite(&d3,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);


    miArchivo = fopen("numero.dat","rb");
     fread(d2, sizeof(eDato), 2, miArchivo);


     for(int i=0; i<2; i++)
     {
         printf("%d--%c\n", d2[i].a, d2[i].b);
     }

    fread(&d3,sizeof(eDato),1,miArchivo);
    printf("%d -- %c", d3.a, d3.b);

    miArchivo = fopen("numero.dat", "rb");
    fclose(miArchivo);
    return 0;
}
