/**
 * @file Engine.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include "Engine.hpp"
#include<cstdlib> // rand

void Engine::saveEngineMove(Weapon move) {
  engineMoves.emplace_back(move);
}

void Engine::saveOpponentMove(Weapon move) {
  opponentMoves.emplace_back(move);
}

Weapon Engine::getLastOpponentMove() {
  return opponentMoves[opponentMoves.size() - 1];
}

Weapon Engine::getSecondToLastOpponentMove() {
  return opponentMoves[opponentMoves.size() - 2];
}

Weapon Engine::getOpponentMove(int moveNumber) {
  return opponentMoves[moveNumber];
}

std::size_t Engine::getNumberOfGamesPlayed() {
  return engineMoves.size();
}


