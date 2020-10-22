/*binsearch*/

#include <stdio.h>

int main()
{
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    int a;
    scanf("%d", &a);
    int p = 5;
    int h = 5;
    do{
        if(tab[p]==a)
        {
            printf("%d zosta³a znaleziona", a);
            return 0;
        }
        if(tab[p]>a)
            p=p-(h/2);
        if(tab[p]<a)
            p=p+(h/2);
        h=h/2;

    } while(h>0);
    printf("%d nie zosta³a znaleziona", a);
}
