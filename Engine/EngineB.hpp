/**
 * @file EngineB.hpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef ENGINEB_HPP
#define ENGINEB_HPP

#include "Engine.hpp"
//#include <string>
#include <vector>

class EngineB : public Engine {
  public:
    Weapon getWeapon();
};

#endif // ENGINEB_HPP
