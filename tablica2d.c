# include <stdio.h>

int** tab2d( int i, int j)
{
    int**tab;
    tab = malloc(i * sizeof *tab);
    for(int k = 0 ; k < i ; ++k)
    {
        tab[k] = malloc(j * sizeof *tab);
    }
    return tab;
}

void zw(int **tablica , int j)
{
    for(int i = 0; i < j ; ++i)
    {
        free(tablica[i]);
    }
    free(tablica);

}

main()
{
    int a;
    int b;
    scanf("%i", &a);
    scanf("%i", &b);

    tab2d(a, b);
    zw(tab2d(a, b), a);
    return 0;
}
