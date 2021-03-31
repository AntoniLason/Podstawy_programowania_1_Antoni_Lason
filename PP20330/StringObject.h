//
// Created by 13ant on 30.03.2021.
//
#include "Object.h"
#ifndef PP20330_STRINGOBJECT_H
#define PP20330_STRINGOBJECT_H


class StringObject: public Object {
    char* value;
    size_t size;
public:
    ~StringObject()
    {
        cout<<"Destruktor Stringobject"<<endl;
    }
    StringObject(char* a)
    {
        setvalue(a);
    }
    void setvalue( char* a)
    {
        value = a;
        size = strlen(value);
    }
    void whatAmI() override
    {
        cout<<"StringObject value: "<<toString()<<" size: "<<size<<endl;
    }
    string toString() override
    {
        string a;
        for(int i=0; i < strlen(value)  ; i++)
        {
            a += value[i];
        }
        return a;
    }
    StringObject* const clone() override
    {
        return new StringObject(*this);
    }
};


#endif //PP20330_STRINGOBJECT_H
