/**
 * @file main.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include <iostream>
#include <type_traits>
#include <string>
#include "Weapon.hpp"
#include "Engine.hpp"
using namespace std; //TODO: rome this line

std::ostream& operator << (std::ostream& os, const Weapon& obj)
{
  os << static_cast<std::underlying_type<Weapon>::type>(obj);
  return os;
}
 
std::string getResult(Weapon player1, Weapon player2)
{
  if (player1 > player2) {
    return "PLAYER ONE HAS WON!\n";
  } else if (player1 < player2) {
    return "PLAYER TWO HAS WON!\n";
  } else {
    return "DRAW\n";
  }
}

class Player {
  public:
    Player(std::string playerName);
  private:
    std::string name;
}; 

Player::Player(std::string playerName) 
  : name(playerName) {
}

/*
class Match {
  public:
    Match(Player player1, Player player2);
};
*/

int main() {
  constexpr std::size_t numberOfGames = 30000000;
  srand (time(NULL));
//  Player player1{"Player1"};
//  Player player2{"Player2"};

  Engine* player1 = new EngineA;
  Engine* player2 = new EngineB;
  
//  Match match(player1, player2);

  std::size_t howManyTimesP1Won{};
  std::size_t howManyTimesP2Won{};
  for (std::size_t i=0 ; i < numberOfGames ; ++i) {
    Weapon weapon1 = player1->getWeapon();
    Weapon weapon2 = player2->getWeapon();
//    cout << getResult(weapon1, weapon2);  
    player1->saveEngineMove(weapon1);
    player1->saveOpponentMove(weapon2);
    player2->saveEngineMove(weapon2);
    player2->saveOpponentMove(weapon1);

    if (weapon1 > weapon2)
      ++howManyTimesP1Won;
    else if (weapon1 < weapon2)
      ++howManyTimesP2Won;
  }

  cout << "Games played: " << numberOfGames;
  cout << endl;
  cout << "howManyTimesP1Won: " << howManyTimesP1Won;
  cout << endl;
  cout << "howManyTimesP2Won: " << howManyTimesP2Won;
  cout << endl;

  delete player1;
  delete player2;

  return 0;
}

