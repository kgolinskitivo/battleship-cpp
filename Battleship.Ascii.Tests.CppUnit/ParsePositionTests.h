#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Battleship.Ascii.Lib/Program.h"
#include "../Battleship.GameController.Lib/GameController.h"

using namespace std;
using namespace Battleship::Ascii;

class ParsePositionTests : public CPPUNIT_NS :: TestFixture
{
    CPPUNIT_TEST_SUITE (ParsePositionTests);
    CPPUNIT_TEST (ParsePositionTest);
    CPPUNIT_TEST (ParseInvalidPositionTest);
    CPPUNIT_TEST (CheckValidPositionOnGridTest);
    CPPUNIT_TEST (CheckInvalidPositionOnGridTest);
    CPPUNIT_TEST_SUITE_END ();

    protected:
        void ParsePositionTest (void);
        void ParseInvalidPositionTest (void);

        void CheckValidPositionOnGridTest (void);
        void CheckInvalidPositionOnGridTest (void);
};
