#include <stdio.h>

int *tablica;

void podwojenie(int r)
{
    tablica = realloc(tablica, 2*r *sizeof(*tablica));
    for(int i = (r-1) ; i < (2*r-1); ++i)
    {
        tablica[i] = 77 *2;
    }
}

int main()
{
    const int rozmiar = 5;
    tablica = (int*) malloc ( rozmiar * sizeof(*tablica));
    for(int i= 0 ; i < rozmiar; ++i)
    {
        tablica[i] = 77;
    }
    podwojenie(rozmiar);

        for(int i= 0 ; i <( rozmiar*2 -1) ; ++i)
    {
        printf("%d ", tablica[i]);
    }

}
