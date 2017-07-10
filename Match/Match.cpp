/**
 * @file Match.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "Match.hpp"

Match::Match() {

}

Match::Match(Engine* player1, Engine* player2, std::size_t numberOfGames) {
  pPlayerOne = player1;
  pPlayerTwo = player2;
  mNumberOfGames = numberOfGames;
  mNumberOfGamesWonByPlayerOne = 0;
  mNumberOfGamesWonByPlayerTwo = 0;
  mNumberOfDraws = 0;
  srand(time(NULL));
}

Match::~Match() {

}

std::size_t Match::getNumberOfGames() {
  return mNumberOfGames;
}

std::size_t Match::getNumberOfGamesAlreadyPlayed() {
  return (mNumberOfGamesWonByPlayerOne 
      + mNumberOfGamesWonByPlayerTwo 
      + mNumberOfDraws);
}

std::size_t Match::getNumberOfGamesToBePlayed() {
  return getNumberOfGames() - getNumberOfGamesAlreadyPlayed();
}

void Match::playGame() {
  Weapon weapon1 = pPlayerOne->getWeapon();
  Weapon weapon2 = pPlayerTwo->getWeapon();

  pPlayerOne->saveEngineMove(weapon1);
  pPlayerOne->saveOpponentMove(weapon2);
  pPlayerTwo->saveEngineMove(weapon2);
  pPlayerTwo->saveOpponentMove(weapon1);

  if (weapon1 > weapon2)
    ++mNumberOfGamesWonByPlayerOne;
  else if (weapon1 < weapon2)
    ++mNumberOfGamesWonByPlayerTwo;
  else
    ++mNumberOfDraws;
}

void Match::playMatch() {
  for (std::size_t i = 0; i < getNumberOfGames(); ++i) {
    playGame();
  }
}

void Match::printResult() {
  std::cout 
  << "mNumberOfGames = "
  << mNumberOfGames
  << std::endl
  << "mNumberOfGamesWonByPlayerOne = "
  << mNumberOfGamesWonByPlayerOne
  << std::endl
  << "mNumberOfGamesWonByPlayerTwo = "
  << mNumberOfGamesWonByPlayerTwo
  << std::endl
  << "mNumberOfDraws = "
  << mNumberOfDraws
  << std::endl;
}

