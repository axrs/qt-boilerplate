#include "min.h"

Min::Min(Number &left, Number &right) : mLeft(left), mRight(right){

}

Number& Min::compare(){
    return mLeft.value() < mRight.value() ? mLeft : mRight;
}

int Min::intValue(){
    return compare().intValue();
}

double Min::value(){
    return compare().value();
}
