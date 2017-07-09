#include <iostream>
#include <type_traits>
#include "Weapon.hpp"
using namespace std; //TODO: rome this line

std::ostream& operator << (std::ostream& os, const Weapon& obj)
{
  os << static_cast<std::underlying_type<Weapon>::type>(obj);
  return os;
}
 
std::string getResult(Weapon player1, Weapon player2)
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
  Weapon player1 = Weapon::SCISSORS;
  Weapon player2 = Weapon::ROCK;
  cout << getResult(player1,player2);
 
  player2 = Weapon::PAPER;
  cout << getResult(player1,player2);
 
  player2 = Weapon::SCISSORS;
  cout << getResult(player1,player2);
 
  return 0;
}

