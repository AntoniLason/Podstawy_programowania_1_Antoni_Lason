#include <stdio.h>

int main()
{
    int tab[5] = {1,2,3,4,5};
    int s;
    scanf("%d", &s);
    for(int i = 0; i <5; ++i)
    {
        if(tab[i]== s)
            {
                printf("%d zosta³a znaleziona", s);
                return 0;
            }
    }
    printf("%d nie zosta³a znaleziona", s);

}
