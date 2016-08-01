#ifndef MAX_H
#define MAX_H

#include "number.h"

class Max : public Number
{
    public:
        Max(Number &left, Number &right);

        virtual int intValue();
        virtual double value();

    private:
        Number& compare();
        Number& mLeft;
        Number& mRight;

};

#endif // MAX_H
