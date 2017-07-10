/**
 * @file engine.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include <gtest/gtest.h>
#include "AllEngines.hpp"
#include "Match.hpp"

TEST(Test, Match)
{
  constexpr std::size_t numberOfGames = 3;

  Engine* player1 = new EngineA;
  Engine* player2 = new EngineB;
  
  Match match(player1, player2, numberOfGames);
  match.playMatch();
  match.printResult();

  delete player1;
  delete player2;
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
