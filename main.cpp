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

int main() {
  constexpr std::size_t numberOfGames = 3;

  Engine* player1 = nullptr;
  Engine* player2 = new EngineB;
  
  Match match(player1, player2, numberOfGames);
  match.playMatch();
  match.printResult();

  delete player1;
  delete player2;
  return 0;
}

