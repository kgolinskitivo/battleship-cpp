#include "ParsePositionTests.h"

#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>

CPPUNIT_TEST_SUITE_REGISTRATION (ParsePositionTests);

void ParsePositionTests :: ParsePositionTest(void)
{      
    {
        string input = "a1";
        Position expected(Letters::A, 1);
        try {
            Position result = Program::ParsePosition(input);
            CPPUNIT_ASSERT_EQUAL(expected.Column, result.Column);
            CPPUNIT_ASSERT_EQUAL(expected.Row, result.Row);
        } catch (...) {
            CPPUNIT_ASSERT(false);
        }
    }
    {
        string input = "b22";
        Position expected(Letters::B, 22);
        try {
            Position result = Program::ParsePosition(input);
            CPPUNIT_ASSERT_EQUAL(expected.Column, result.Column);
            CPPUNIT_ASSERT_EQUAL(expected.Row, result.Row);
        } catch (...) {
            CPPUNIT_ASSERT(false);
        }
    }
}

void ParsePositionTests :: ParseInvalidPositionTest(void)
{
    {
        try {
            string input = "1a";
            Position result = Program::ParsePosition(input);
        } catch (std::invalid_argument &e) {
            CPPUNIT_ASSERT(true);
        } catch (...) {
            CPPUNIT_ASSERT(false);
        }
    }
    {
        try {
            string input = "a2a";
            Position result = Program::ParsePosition(input);
        } catch (std::invalid_argument &e) {
            CPPUNIT_ASSERT(true);
        } catch (...) {
            CPPUNIT_ASSERT(false);
        }
    }
    {
        try {
            string input = "1";
            Position result = Program::ParsePosition(input);
        } catch (std::invalid_argument &e) {
            CPPUNIT_ASSERT(true);
        } catch (...) {
            CPPUNIT_ASSERT(false);
        }
    }
}

void ParsePositionTests :: CheckValidPositionOnGridTest(void)
{
    const Position startPos(Letters::A, 1);
    const Position endPos(Letters::H, 8);
    {
        Position positionUnderTest(Letters::A, 1);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(result);
    }
    {
        Position positionUnderTest(Letters::H, 1);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(result);
    }
    {
        Position positionUnderTest(Letters::A, 8);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(result);
    }
    {
        Position positionUnderTest(Letters::H, 8);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(result);
    }
}

void ParsePositionTests :: CheckInvalidPositionOnGridTest(void)
{
    const Position startPos(Letters::A, 1);
    const Position endPos(Letters::H, 8);
    {
        Position positionUnderTest((Letters)'q', 1);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(!result);
    }
    {
        Position positionUnderTest((Letters)'q', 0);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(!result);
    }
    {
        Position positionUnderTest(Letters::A, 9);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(!result);
    }
    {
        Position positionUnderTest(Letters::A, 0);
        bool result = Program::IsPositionOnGrid(startPos, endPos, positionUnderTest);
        CPPUNIT_ASSERT(!result);
    }
}
