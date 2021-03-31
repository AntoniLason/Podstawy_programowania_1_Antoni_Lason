//
// Created by 13ant on 30.03.2021.
//
#include "Object.h"
#ifndef PP20330_DOUBLEOBJECT_H
#define PP20330_DOUBLEOBJECT_H


class DoubleObject: public Object {
private:
    double value;
public:
    ~DoubleObject()
    {
        cout<<" Destruktor DoubleObject"<< endl;
    }
    DoubleObject(double a)
    {
        setvalue(a);
    }
    double getvalue()
    {
        return value;
    }
    void setvalue(double a)
    {
        value = a;
    }
    void whatAmI() override
    {
        cout<<"DoubleObject value:"<<getvalue()<<endl;
    }
    string toString() override
    {
        return to_string(value);
    }
    DoubleObject* const clone() override
    {
        return new DoubleObject(*this);
    }
};


#endif //PP20330_DOUBLEOBJECT_H
