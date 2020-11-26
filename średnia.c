#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *plik;

    if ((plik=fopen("liczby.txt", "r"))==NULL)
    {
        printf("Nie mo¿na otworzyæ pliku");
        exit(1);
    }
    int a=0;
    int b;
    for(int i = 0; i<10 ; i++)
    {
        fscanf(plik, "%d", &b);
        a+=b;
    }

    a = a/10;
    printf("%d" , a);
    fclose (plik);
    return 0;
}

