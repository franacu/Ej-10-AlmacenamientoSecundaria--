#include <stdio.h>
#include "string.h"

#define LONG_MAX 256
int main()
{
    int cont=0;
    char linea[LONG_MAX];
    char *archivo1="ejercicio10.txt";
    char *archivo2="ejercicio10Copia.txt";
    FILE *fp1;
    FILE *fp2;

    fp1= fopen(archivo1,"a");
    fprintf(fp1,"Abriendo este archivo...donde lo voy a copiar en otro");
    fclose(fp1);


    fp1= fopen(archivo1,"r");
    fp2= fopen(archivo2,"w");

    while (fgets(linea,LONG_MAX,fp1)!=NULL)
    {
        fprintf(fp2,"%s",linea);
    }

    printf("El archivo ha sido copiado con éxito\n");
    fclose(fp2);
    fclose(fp1);
    return 0;
}
