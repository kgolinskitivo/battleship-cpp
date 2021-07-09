#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Battleship.GameController.Lib/GameController.h"

using namespace std;
using namespace Battleship::GameController;
using namespace Battleship::GameController::Contracts;

class CheckIsSunkTests : public CPPUNIT_NS :: TestFixture
{
    CPPUNIT_TEST_SUITE (CheckIsSunkTests);
    
    CPPUNIT_TEST (ShipIsSunk);
    
    CPPUNIT_TEST_SUITE_END ();

    protected:
        void ShipIsSunk (void);
};