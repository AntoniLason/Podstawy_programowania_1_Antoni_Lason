//
// Created by 13ant on 30.03.2021.
//
#include <string.h>
using namespace std;
#ifndef PP20330_OBJECT_H
#define PP20330_OBJECT_H


class Object{

public:
    //////////////////////////
    virtual ~Object()
    {
        cout<<"Destruktor Object"<<endl;
    }

    /////////////////////////
    virtual void whatAmI()
    {
        cout<<"Object, no value"<<endl;
    }
    virtual string toString()
    {
        return "toString?";
    }
    virtual Object* const clone()
    {
        return new Object(*this);
    }
};


#endif //PP20330_OBJECT_H
