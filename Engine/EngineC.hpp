/**
 * @file EngineC.hpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef ENGINEC_HPP
#define ENGINEC_HPP

#include "Engine.hpp"
//#include <string>
#include <vector>

class EngineC : public Engine {
  public:
    Weapon getWeapon();
};

#endif // ENGINE_HPP
