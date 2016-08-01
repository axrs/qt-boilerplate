#ifndef TESTDOUBLE_H
#define TESTDOUBLE_H

#include "autotest.h"
#include <QDebug>

#include "double.h"

class TestDouble : public QObject
{
    Q_OBJECT
public:

private:

private slots:

    void testConstructor()
    {
        Double d = Double(123.456);
        EXPECT(d.value() == 123.456, "The value should be 123.456");
    }

    void testIntegerValue()
    {
        Double d = Double(123.456);
        EXPECT(d.intValue() == 123, "The value should be 123");
    }

};

DECLARE_TEST(TestDouble)

#endif // TESTDOUBLE_H
