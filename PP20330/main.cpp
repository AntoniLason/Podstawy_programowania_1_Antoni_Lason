#include <iostream>
#include "Object.cpp"
#include "StringObject.cpp"
#include "DoubleObject.cpp"
#include "IntObject.cpp"
#include <string>
/*void znajdzStringObject( Object *tab[])
{
    for(int i = 0; i<10; i++)
    {

    }
}*/
int main() {
    Object *tab[10];
    tab[0] = new StringObject("Wesołlych swiąt i smacznego jajka");
    tab[1] = new IntObject(2345678);
    tab[2] = new DoubleObject(98475.981327354);
    for(int i = 3; i<10; i++)
    {
        tab[i] = new Object;
    }
    for(int i = 0; i<10; i++)
    {
        tab[i]->whatAmI();
    }
    for(int i = 0; i<10; i++)
    {
        delete tab[i];
    }


}
