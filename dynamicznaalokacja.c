#include <stdio.h>

int main()
{
    int tablicaStatyczna[10] = {1,2,3,4,5,6,7,8,9};
    const int rozmiar = sizeof(tablicaStatyczna)/sizeof (tablicaStatyczna[0]);
    int *tablicaDynamiczna= (int*) malloc(rozmiar * sizeof(*tablicaDynamiczna));
    for(int i = 0 ; i < rozmiar; ++i )
    {
        tablicaDynamiczna[i] = tablicaStatyczna[i];
    }
    for(int i = 0 ; i < rozmiar; ++i )
    {
        printf("%d ", tablicaDynamiczna[i]);
    }
    free (tablicaDynamiczna);

}
