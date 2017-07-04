#include <iostream>
#include <type_traits>
#include "Game.hpp"
using namespace std; //TODO: rome this line
 
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
 
std::ostream& operator << (std::ostream& os, const Item& obj)
{
  os << static_cast<std::underlying_type<Item>::type>(obj);
  return os;
}
 
std::string getResult(Item player1, Item player2)
{
  if (player1 > player2) {
    return "PLAYER ONE HAS WON!\n";
  } else if (player1 < player2) {
    return "PLAYER TWO HAS WON!\n";
  } else {
    return "DRAW\n";
  }
}
 
int main() {
  Item player1 = Item::SCISSORS;
  Item player2 = Item::ROCK;
  cout << getResult(player1,player2);
 
  player2 = Item::PAPER;
  cout << getResult(player1,player2);
 
  player2 = Item::SCISSORS;
  cout << getResult(player1,player2);
 
  return 0;
}

