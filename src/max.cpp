#include "max.h"

Max::Max(Number& left, Number& right)
    : mLeft(left), mRight(right){
}

Number& Max::compare(){
    return (mLeft.value() > mRight.value()) ? mLeft : mRight;
}

int Max::intValue(){
    return compare().intValue();
}

double Max::value(){
    return compare().value();
}
