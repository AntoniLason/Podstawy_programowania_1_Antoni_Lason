#include <stdio.h>
#include <math.h>

main()
{
    int a, b, c;
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    int del;
    del= b*b-4*a*c;
    if(del>0)
    {
        printf("%d\n", (sqrt(del)-b)/(2*a));
        printf("%d\n", (-sqrt(del)-b)/(2*a));
    }
    else if(del==0)
    {
        printf("%d\n", -b/2*a);
    }
    else
    {
        printf("Brak rozwiazan rzeczywistych");
    }
    return 0;

}
