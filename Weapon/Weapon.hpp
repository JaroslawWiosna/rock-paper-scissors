/**
 * @file Weapon.hpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <type_traits>

enum class Weapon:char { ROCK = 'R', PAPER = 'P', SCISSORS = 'S' };
//enum class Weapon { ROCK, PAPER, SCISSORS};

inline bool operator>(Weapon lhs, Weapon rhs)
{
  if (lhs == Weapon::ROCK && rhs == Weapon::SCISSORS) {
    return true;
  } else if (lhs == Weapon::PAPER && rhs == Weapon::ROCK) {
    return true;
  } else if (lhs == Weapon::SCISSORS && rhs == Weapon::PAPER) {
    return true;
  } else {
    return false;
  }
}
 
inline bool operator<(Weapon lhs, Weapon rhs)
{
  if (lhs == Weapon::ROCK && rhs == Weapon::PAPER) {
    return true;
  } else if (lhs == Weapon::PAPER && rhs == Weapon::SCISSORS) {
    return true;
  } else if (lhs == Weapon::SCISSORS && rhs == Weapon::ROCK) {
    return true;
  } else {
    return false;
  }
}
 
inline bool operator==(Weapon lhs, Weapon rhs)
{
  return (!(lhs > rhs) && !(lhs < rhs));
}
 
inline bool operator>=(Weapon lhs, Weapon rhs)
{
  return (!(lhs < rhs));
}
 
inline bool operator<=(Weapon lhs, Weapon rhs)
{
  return (!(lhs > rhs));
}

#endif // WEAPON_HPP

