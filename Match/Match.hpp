/**
 * @file Match.hpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef MATCH_HPP
#define MATCH_HPP

#include "AllEngines.hpp"
#include <iostream>

class Match {
  public:
    Match();
    Match(Engine* player1, Engine* player2, std::size_t numberOfGames);
    virtual ~Match();
    std::size_t getNumberOfGames();
    std::size_t getNumberOfGamesAlreadyPlayed();
    std::size_t getNumberOfGamesToBePlayed();
    void playGame();
    void playGameWithHuman();
    void playGameOfEngines();
    void playMatch();
    void printResult();
  private:
    Engine* pPlayerOne;
    Engine* pPlayerTwo;

    std::size_t mNumberOfGames;
    std::size_t mNumberOfGamesWonByPlayerOne;
    std::size_t mNumberOfGamesWonByPlayerTwo;
    std::size_t mNumberOfDraws;
};

#endif // MATCH_HPP
