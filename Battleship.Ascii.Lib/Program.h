#pragma once

#include <list>

#include "../Battleship.GameController.Lib/Ship.h"

using namespace std;
using namespace Battleship::GameController::Contracts;

namespace Battleship
{
  namespace Ascii
  {
	class Program
	{
	private:
	  static list<Ship> myFleet;
	  static list<Ship> enemyFleet;

	public:
	  Program();
	  ~Program();

	public:
	  static void Main();
	  static void StartGame();

	private:
	  static void InitializeGame();

	  static void InitializeMyFleet();

	  static void InitializeEnemyFleet(list<Ship> &Fleet);
	  static void InitializeEnemyFleet1(list<Ship> &Fleet);
      static void InitializeEnemyFleet2(list<Ship> &Fleet);
      static void InitializeEnemyFleet3(list<Ship> &Fleet);
      static void InitializeEnemyFleet4(list<Ship> &Fleet);
      static void InitializeEnemyFleet5(list<Ship> &Fleet);
      static void InitializeEnemyFleet6(list<Ship> &Fleet);

      static void MessageYouWon();
      static void MessageYouLost();
      static bool IsEndOfTheGame();

	public:
	  static Position ParsePosition(string &input);
	  static Position GetRandomPosition(const Position& gridStart, const Position& gridEnd);

      static bool IsPositionOnGrid(const Position& gridStart, const Position& gridEnd, Position& position);

      using EnemyFleetInitFunction = void(list<Ship> &);
      static EnemyFleetInitFunction* getEnemyFleetInitFunction();
	};
  }
}

