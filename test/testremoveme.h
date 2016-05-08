#ifndef TESTREMOVEME_H
#define TESTREMOVEME_H

#include "autotest.h"
#include <QDebug>

#include "removeme.h"

class TestRemoveMe : public QObject
{
    Q_OBJECT
public:

private:

private slots:
    void initTestCase()
    {
    }

    void testRemoveMe()
    {
        RemoveMe me;
        QVERIFY2(true, "True should be true");
    }

    void cleanupTestCase()
    {
    }
};

DECLARE_TEST(TestRemoveMe)

#endif // TESTREMOVEME_H
