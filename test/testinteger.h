#ifndef TESTINTEGER_H
#define TESTINTEGER_H

#include "autotest.h"
#include <QDebug>

#include "integer.h"

class TestInteger : public QObject
{
    Q_OBJECT
public:

private:

private slots:

    void testConstructor()
    {

        Integer i = Integer(23);
        EXPECT(i.intValue() == 23, "The value should be 23");
    }

};

DECLARE_TEST(TestInteger)

#endif // TESTINTEGER_H
