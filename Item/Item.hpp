#ifndef ITEM_HPP
#define ITEM_HPP

#include <type_traits>

enum class Item:char { ROCK = 'R', PAPER = 'P', SCISSORS = 'S' };
//enum class Item { ROCK, PAPER, SCISSORS};

inline bool operator>(Item lhs, Item rhs)
{
  if (lhs == Item::ROCK && rhs == Item::SCISSORS) {
    return true;
  } else if (lhs == Item::PAPER && rhs == Item::ROCK) {
    return true;
  } else if (lhs == Item::SCISSORS && rhs == Item::PAPER) {
    return true;
  } else {
    return false;
  }
}
 
inline bool operator<(Item lhs, Item rhs)
{
  if (lhs == Item::ROCK && rhs == Item::PAPER) {
    return true;
  } else if (lhs == Item::PAPER && rhs == Item::SCISSORS) {
    return true;
  } else if (lhs == Item::SCISSORS && rhs == Item::ROCK) {
    return true;
  } else {
    return false;
  }
}
 
inline bool operator==(Item lhs, Item rhs)
{
  return (!(lhs > rhs) && !(lhs < rhs));
}
 
inline bool operator>=(Item lhs, Item rhs)
{
  return (!(lhs < rhs));
}
 
inline bool operator<=(Item lhs, Item rhs)
{
  return (!(lhs > rhs));
}

#endif // ITEM_HPP

