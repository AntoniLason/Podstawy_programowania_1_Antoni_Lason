# include <stdio.h>

int** tab2d1( int i, int j)
{
    int **tab1;
    tab1 = malloc(i * sizeof *tab1);
    for(int k = 0 ; k < i ; ++k)
    {
        tab1[k] = malloc(j * sizeof *tab1);
        for(int l = 0 ; l<j ; ++l)
        {
            tab1[k][l] = 1;
        }
    }
    return tab1;
}

int** tab2d2( int i, int j)
{
    int **tab2;
    tab2 = malloc(i * sizeof *tab2);
    for(int k = 0 ; k < i ; ++k)
    {
        tab2[k] = malloc(j * sizeof *tab2);

        for(int l = 0 ; l<j ; ++l)
        {
            tab2[k][l] = 2;
        }
    }
    return tab2;
}

int **sum(int i, int j, int **tabx, int **taby)
{
    int **sum;
    sum = malloc(i * sizeof *sum);
    for(int k = 0 ; k < i ; ++k)
    {
        sum[k] = malloc(j * sizeof *sum);
        for(int l = 0 ; l < j; ++l)
        {
            sum[k][l]=tabx[k][l]+taby[k][l];
            printf("%d ", sum[k][l]);
        }
        printf("\n");
    }


    return sum;
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

    tab2d1(a, b);
    tab2d2(a, b);
    sum(a, b, tab2d1(a, b), tab2d2(a, b));
 //   zw(tab2d(a, b), a);
    return 0;
}
