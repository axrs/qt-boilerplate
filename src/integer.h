#ifndef INTEGER_H
#define INTEGER_H

#include "number.h"
class Integer : public Number
{
    public:
        Integer(int value);

        virtual int intValue();
        virtual double value();
    private:
        int _value;
};

#endif // INTEGER_H
