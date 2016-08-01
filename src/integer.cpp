#include "integer.h"

Integer::Integer(int value): _value(value)
{

}

int Integer::intValue(){
    return _value;
}

double Integer::value(){
    return (double)_value;
}
