//
// Created by 13ant on 30.03.2021.
//
#include "Object.h"
#ifndef PP20330_INTOBJECT_H
#define PP20330_INTOBJECT_H


class IntObject: public Object {
    int value;
public:
    ~IntObject()
    {
        cout<<"Destruktor IntObject"<<endl;
    }
    IntObject(int a)
    {
        setvalue(a);
    }
    int getvalue()
    {
        return value;
    }
    void setvalue(int a)
    {
        value = a;
    }
    void whatAmI() override
    {
        cout<<"IntObject value:"<<getvalue()<<endl;
    }
    string toString() override
    {
        return to_string(value);
    }
    IntObject* const clone() override
    {
        return new IntObject(*this);
    }
};


#endif //PP20330_INTOBJECT_H
