#include "double.h"

Double::Double(double value){
    _value = value;
}

int Double::intValue(){
    return (int) _value;
}

double Double::value(){
    return _value;
}
