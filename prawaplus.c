#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *plik;
    char tekst[] = "\nJe¿eli coœ mo¿e siê nie udaæ, to siê nie uda.";
    if ((plik=fopen("PrawaMurphiego.txt", "a"))==NULL)
    {
        printf("Nie mo¿na otworzyæ pliku");
        exit(1);
    }
    fseek(plik, 0, 2);
    fprintf (plik, "%s", tekst);
    fclose (plik);
    return 0;
}

