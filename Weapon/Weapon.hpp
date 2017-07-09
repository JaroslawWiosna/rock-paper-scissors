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

