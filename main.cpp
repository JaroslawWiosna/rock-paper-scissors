#include <iostream>
#include <type_traits>
#include "Item.hpp"
using namespace std; //TODO: rome this line

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

