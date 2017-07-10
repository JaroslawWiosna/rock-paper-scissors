/**
 * @file EngineB.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "EngineB.hpp"
#include<cstdlib> // rand

Weapon EngineB::getWeapon() {
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


