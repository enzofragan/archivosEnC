#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    char men[]="hola a todos";

    f=fopen("D:\\fragan\\##cloneGit\\archivosEnC\\archiHtml\\miHtml.html","w");

    if(f!=NULL)
    {
        fprintf(f,"<html><head>");
        fprintf(f,men);
        fprintf(f,"</head></html>");

        fclose(f);
    }
    return 0;
}
