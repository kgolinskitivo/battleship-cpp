#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Battleship.Ascii.Lib/Program.h"
#include "../Battleship.GameController.Lib/GameController.h"

using namespace std;
using namespace Battleship::Ascii;

class EnemyFleetsTests : public CPPUNIT_NS :: TestFixture
{
    CPPUNIT_TEST_SUITE (EnemyFleetsTests);
    CPPUNIT_TEST (CheckEnemyFleetInitMethodTest);
    CPPUNIT_TEST_SUITE_END ();

    protected:
        void CheckEnemyFleetInitMethodTest (void);
};
