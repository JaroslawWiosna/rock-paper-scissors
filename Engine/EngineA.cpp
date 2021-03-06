/**
 * @file EngineA.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "EngineA.hpp"
#include<cstdlib> // rand

Weapon EngineA::getWeapon() {
  return Weapon::ROCK;
}

