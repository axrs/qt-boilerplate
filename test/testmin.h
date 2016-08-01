#ifndef TESTMIN_H
#define TESTMIN_H

#include "autotest.h"
#include <QDebug>

#include "min.h"
#include "integer.h"
#include "double.h"

class TestMin : public QObject
{
    Q_OBJECT
public:

private:

private slots:

    void testConstructor()
    {
        Double left = Double(45.23);
        Integer right = Integer(123);

        Min min = Min(left, right);

        EXPECT(min.value() == 45.23, "The minimum value of 45.23 and 123 is 45.23");
    }


    void testIdenticalValues()
    {
        Double left = Double(45.23);

        Min min = Min(left, left);

        EXPECT(min.value() == 45.23, "The minimum value of 45.23 and 45.23 is 45.23");
    }
};


DECLARE_TEST(TestMin)

#endif // TESTMIN_H
