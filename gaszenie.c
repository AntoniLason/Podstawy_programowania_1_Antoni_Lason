#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bool2Enabled(unsigned int number, unsigned bit)
{
    unsigned int s=1;
    s = s << bit;
    number=number|s;
    return number;
}

int main(void)
{
    unsigned int a = 3;
    unsigned b = 4;
    printf("%d", bool2Enabled(a,b));

}
