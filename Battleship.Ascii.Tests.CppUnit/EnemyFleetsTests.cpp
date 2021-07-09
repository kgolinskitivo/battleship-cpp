#include "EnemyFleetsTests.h"

#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>

CPPUNIT_TEST_SUITE_REGISTRATION (EnemyFleetsTests);

void EnemyFleetsTests :: CheckEnemyFleetInitMethodTest(void)
{
    Program::EnemyFleetInitFunction* fun1 = Program::getEnemyFleetInitFunction();
    // checking if we are pseudo random
    // we are assuming that we won't be getting each time the same function
    for (size_t i = 0; i < 10; i++) {
        Program::EnemyFleetInitFunction* fun2 = Program::getEnemyFleetInitFunction();
        if (fun1 != fun2) {
            CPPUNIT_ASSERT(true);
            return;
        }
    }
    CPPUNIT_ASSERT(false);
}
