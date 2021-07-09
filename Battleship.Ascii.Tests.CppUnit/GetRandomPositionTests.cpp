#include "GetRandomPositionTests.h"

#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <thread>

CPPUNIT_TEST_SUITE_REGISTRATION (GetRandomPositionTests);

void GetRandomPositionTests :: CheckIfPositionInGridTest(void)
{
    {
        const Position startPos(Letters::A, 1);
        const Position endPos(Letters::H, 8);
        for (size_t i = 0; i< 10; i++) {
            std::this_thread::sleep_for(1s);
            Position result = Program::GetRandomPosition(startPos, endPos);
//            cout << "column = " << result.Column << " row = " << result.Row << endl;
            CPPUNIT_ASSERT(result.Column >= startPos.Column);
            CPPUNIT_ASSERT(result.Column <= endPos.Column);
            CPPUNIT_ASSERT(result.Row >= startPos.Row);
            CPPUNIT_ASSERT(result.Row <= endPos.Row);
        }
    }
    {
        const Position startPos(Letters::A, 1);
        const Position endPos(Letters::B, 2);
        for (size_t i = 0; i< 10; i++) {
            std::this_thread::sleep_for(1s);
            Position result = Program::GetRandomPosition(startPos, endPos);
//            cout << "column = " << result.Column << " row = " << result.Row << endl;
            CPPUNIT_ASSERT(result.Column >= startPos.Column);
            CPPUNIT_ASSERT(result.Column <= endPos.Column);
            CPPUNIT_ASSERT(result.Row >= startPos.Row);
            CPPUNIT_ASSERT(result.Row <= endPos.Row);
        }
    }
}
