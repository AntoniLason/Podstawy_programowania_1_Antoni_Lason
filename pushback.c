#include <stdio.h>

int main()
{
    const int rozmiar = 5;
    int *tablicaDynamiczna= (int*) malloc(rozmiar * sizeof(*tablicaDynamiczna));
    for(int i = 0 ; i < rozmiar; ++i)
    {
        printf("%d ", tablicaDynamiczna[i]);
    }
    tablicaDynamiczna = realloc(tablicaDynamiczna, rozmiar+1 *sizeof(*tablicaDynamiczna));
    tablicaDynamiczna[rozmiar] = 6;
    printf("\n");
    printf("%d ", tablicaDynamiczna[5]);
}
