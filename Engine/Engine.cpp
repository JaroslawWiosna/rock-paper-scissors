#include "Engine.hpp"
#include<cstdlib> // rand

void Engine::saveEngineMove(Weapon move) {
  engineMoves.emplace_back(move);
}

void Engine::saveOpponentMove(Weapon move) {
  opponentMoves.emplace_back(move);
}

Weapon Engine::getLastOpponentMove() {
  return getOpponentMove(-1);
}

Weapon Engine::getSecondToLastOpponentMove() {
  return getOpponentMove(-2);
}

Weapon Engine::getOpponentMove(int moveNumber) {
  return opponentMoves[moveNumber];
}

std::size_t Engine::getNumberOfGamesPlayed() {
  return engineMoves.size();
}

Weapon EngineA::getWeapon() {
  return Weapon::ROCK;
}

Weapon EngineB::getWeapon() {
  unsigned int random = rand()%3;
  if ( random == 0)
    return Weapon::ROCK;
  else if ( random == 1)
    return Weapon::PAPER;
  else if ( random == 2)
    return Weapon::SCISSORS;
  else
    throw;
}

// TODO: refactor!!!
Weapon EngineC::getWeapon() {
  if ((getNumberOfGamesPlayed() >= 2) 
      && (getLastOpponentMove() == getSecondToLastOpponentMove())) {
    if (getLastOpponentMove() == Weapon::ROCK)
      return Weapon::SCISSORS;
    else if (getLastOpponentMove() == Weapon::PAPER)
      return Weapon::ROCK;
    else if (getLastOpponentMove() == Weapon::SCISSORS)
      return Weapon::PAPER;
    else
      throw;
  } else {
      unsigned int random = rand()%3;
      if ( random == 0)
        return Weapon::ROCK;
      else if ( random == 1)
        return Weapon::PAPER;
      else if ( random == 2)
        return Weapon::SCISSORS;
      else
        throw;
  }
}


