#include "CheckIsSunkTests.h"

#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>

CPPUNIT_TEST_SUITE_REGISTRATION (CheckIsSunkTests);

void CheckIsSunkTests :: ShipIsSunk(void)
{
    Ship ship = Ship("Test ship", 3);
    ship.AddPosition("A1");
    ship.AddPosition("A2");
    ship.AddPosition("A3");

    list<Ship> ships;
    ships.insert(ships.end(), ship);

    GameController::GameController::CheckIsHit(ships, Position(Letters::A, 1));
    GameController::GameController::CheckIsHit(ships, Position(Letters::A, 2));
    GameController::GameController::CheckIsHit(ships, Position(Letters::A, 3));

    bool isSunk = GameController::GameController::IsSunk(*ships.begin());
    CPPUNIT_ASSERT_EQUAL(true,  isSunk);
}
