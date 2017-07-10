/**
 * @file EngineA.hpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef ENGINEA_HPP
#define ENGINEA_HPP

#include "Engine.hpp"
//#include <string>
#include <vector>

class EngineA : public Engine {
  public:
    Weapon getWeapon();
};

#endif // ENGINEA_HPP
