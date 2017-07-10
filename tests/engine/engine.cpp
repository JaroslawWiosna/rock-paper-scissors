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

TEST(Test, EngineCheckLastMove)
{
  srand(time(NULL));
  Engine* player = new EngineA;

  Weapon weapon1{Weapon::ROCK}; 
  Weapon weapon2{Weapon::PAPER};
  Weapon weapon3{Weapon::SCISSORS};

  player->saveEngineMove(weapon1);
  player->saveOpponentMove(weapon3);
  ASSERT_TRUE(player->getLastOpponentMove() == weapon3);

  player->saveEngineMove(weapon2);
  player->saveOpponentMove(weapon2);
  ASSERT_TRUE(player->getLastOpponentMove() == weapon2);
  ASSERT_TRUE(player->getSecondToLastOpponentMove() == weapon3);
  
  //TODO: Consider changing ASSERT_TRUE to ASSERT_EQ, which gives:
  // Value of: weapon3
  // Actual: 1-byte object <53>
  // Expected: player->getSecondToLastOpponentMove()
  // Which is: 1-byte object <50>

  ASSERT_EQ(player->getLastOpponentMove(), weapon2);
  ASSERT_EQ(player->getSecondToLastOpponentMove(), weapon3);

  player->saveEngineMove(weapon2);
  player->saveOpponentMove(weapon1);
  ASSERT_TRUE(player->getLastOpponentMove() == weapon1);
  ASSERT_TRUE(player->getSecondToLastOpponentMove() == weapon2);

  delete player;
}


int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
