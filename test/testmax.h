#ifndef TESTMAX_H
#define TESTMAX_H

#include "autotest.h"
#include <QDebug>

#include "max.h"
#include "integer.h"
#include "double.h"

class TestMax : public QObject
{
    Q_OBJECT
public:

private:

private slots:

    void testConstructor()
    {
        Integer left = Integer(23);
        Integer right = Integer(45);

        Max max = Max(left, right);

        EXPECT(max.intValue() == 45, "The maximum value of 23 and 45 is 45");
    }

    void testDoubleAndIntegerCompare()
    {

        Double left = Double(45.2);
        Integer right = Integer(45);

        Max max = Max(left, right);

        EXPECT(max.value() == 45.2, "The maximum value of 45.2 and 45 is 45.2");
    }

};


DECLARE_TEST(TestMax)


#endif // TESTMAX_H
