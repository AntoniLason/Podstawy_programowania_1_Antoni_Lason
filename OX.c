#include <stdio.h>

char tab[3][3]={{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

void kulko()
{
    int pozycja;
    scanf("%d", &pozycja);
    --pozycja;
    if(tab[pozycja/3][pozycja%3] != 'o' && tab[pozycja/3][pozycja%3] != 'x')
    {
        tab[pozycja/3][pozycja%3] = 'o';
    }
    else
    {
        printf("Nie mozna wykonac ruchu");
    }
}

void krzyzyk()
{
    int pozycja;
    scanf("%d", &pozycja);
    --pozycja;
    if(tab[pozycja/3][pozycja%3] != 'o' && tab[pozycja/3][pozycja%3] != 'x')
    {
        tab[pozycja/3][pozycja%3] = 'x';
    }
    else
    {
        printf("Nie mozna wykonac ruchu");
    }
}

void sprawdzanie()
{
    for(int i = 0 ; i<3; ++i)
    {
    if(tab[i][0] == 'o' && tab[i][1] == 'o' && tab[i][2]== 'o')
        printf("Wygrywa kulko");
    else if(tab[0][i] == 'o' && tab[1][i] == 'o' && tab[2][i]== 'o')
        printf("Wygrywa kulko");
    }
    if(tab[0][0] == 'o' && tab[1][1] == 'o' && tab[2][2]== 'o')
        printf("Wygrywa kulko");
    else if(tab[2][0] == 'o' && tab[1][1] == 'o' && tab[0][2]== 'o')
        printf("Wygrywa kulko");


    for(int i = 0 ; i<3; ++i)
    {
    if(tab[i][0] == 'x' && tab[i][1] == 'x' && tab[i][2]== 'x')
        printf("Wygrywa krzyzyk");
    else if(tab[0][i] == 'x' && tab[1][i] == 'x' && tab[2][i]== 'x')
        printf("Wygrywa krzyzyk");
    }
    if(tab[0][0] == 'x' && tab[1][1] == 'x' && tab[2][2]== 'x')
        printf("Wygrywa krzyzyk");
    else if(tab[2][0] == 'x' && tab[1][1] == 'x' && tab[0][2]== 'x')
        printf("Wygrywa krzyzyk");

}

void wypisanie()
{
    for(int i = 0 ; i<3 ; ++i)
    {
        for(int j = 0 ; j < 3 ; ++j)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i = 0;
    wypisanie();
    while(i<9)
    {
        kulko();
        wypisanie();
        sprawdzanie();
        ++i;
        krzyzyk();
        wypisanie();
        sprawdzanie();
        ++i;
    }
    return 0;
}
