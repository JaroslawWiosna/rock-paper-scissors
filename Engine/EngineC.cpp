/**
 * @file EngineC.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "EngineC.hpp"
#include<cstdlib> // rand

// TODO: refactor!!!
Weapon EngineC::getWeapon() {
  if ((getNumberOfGamesPlayed() >= 2) 
      && (getLastOpponentMove() == getSecondToLastOpponentMove())) {
    if (getLastOpponentMove() == Weapon::ROCK)
      return Weapon::SCISSORS;
    else if (getLastOpponentMove() == Weapon::PAPER)
      return Weapon::ROCK;
    else if (getLastOpponentMove() == Weapon::SCISSORS)
      return Weapon::PAPER;
    else
      throw;
  } else {
      unsigned int random = rand()%3;
      if ( random == 0)
        return Weapon::ROCK;
      else if ( random == 1)
        return Weapon::PAPER;
      else if ( random == 2)
        return Weapon::SCISSORS;
      else
        throw;
  }
}


