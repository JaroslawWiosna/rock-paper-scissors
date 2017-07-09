/**
 * @file Engine.hpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "Weapon.hpp"
//#include <string>
#include <vector>

class Engine {
  public:
    Engine() {}
    virtual ~Engine() {} 
    virtual Weapon getWeapon() = 0;
    void saveEngineMove(Weapon move);
    void saveOpponentMove(Weapon move);
    Weapon getLastOpponentMove();
    Weapon getSecondToLastOpponentMove();
    Weapon getOpponentMove(int moveNumber);
    std::size_t getNumberOfGamesPlayed();
  private:
    std::vector<Weapon> engineMoves;
    std::vector<Weapon> opponentMoves;
};

class EngineA : public Engine {
  public:
    Weapon getWeapon();
};

class EngineB : public Engine {
  public:
    Weapon getWeapon();
};

class EngineC : public Engine {
  public:
    Weapon getWeapon();
};

#endif // ENGINE_HPP
