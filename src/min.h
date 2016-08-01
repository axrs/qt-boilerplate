#ifndef MIN_H
#define MIN_H

#include "number.h"

class Min : public Number
{
    public:
        Min(Number& left, Number& right);

        virtual int intValue();
        virtual double value();
    private:
        Number& compare();
        Number& mLeft;
        Number& mRight;

};

#endif // MIN_H
