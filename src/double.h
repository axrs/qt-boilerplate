#ifndef DOUBLE_H
#define DOUBLE_H

#include "number.h"

class Double : public Number
{
    public:
        Double(double value);

        virtual int intValue();
        virtual double value();

    private:
        double _value;
};

#endif // DOUBLE_H
