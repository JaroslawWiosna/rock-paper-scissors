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
#include "AllEngines.hpp"
#include "Match.hpp"

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
  constexpr std::size_t numberOfGames = 3000000;

  Engine* player1 = new EngineA;
  Engine* player2 = new EngineB;
  
  Match match(player1, player2, numberOfGames);
  match.playMatch();
  match.printResult();

  delete player1;
  delete player2;
  return 0;
}

