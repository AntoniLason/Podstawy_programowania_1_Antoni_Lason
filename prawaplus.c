#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *plik;
    char tekst[] = "\nJe�eli co� mo�e si� nie uda�, to si� nie uda.";
    if ((plik=fopen("PrawaMurphiego.txt", "a"))==NULL)
    {
        printf("Nie mo�na otworzy� pliku");
        exit(1);
    }
    fseek(plik, 0, 2);
    fprintf (plik, "%s", tekst);
    fclose (plik);
    return 0;
}

