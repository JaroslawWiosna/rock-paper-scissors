/**
 * @file engineC.cpp
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
#include "Engine.hpp"

TEST(Test, EngineC_opponentGivesROCKTwoTimes)
{
  srand(time(NULL));
  Engine* player1 = new EngineC;

  Weapon weapon1{};
  Weapon weapon2{};

  weapon1 = player1->getWeapon();
  weapon2 = Weapon::ROCK;
  
  player1->saveEngineMove(weapon1);
  player1->saveOpponentMove(weapon2);

  weapon1 = player1->getWeapon();
  weapon2 = Weapon::ROCK;
  
  player1->saveEngineMove(weapon1);
  player1->saveOpponentMove(weapon2);

  weapon1 = player1->getWeapon();
  ASSERT_TRUE( Weapon::ROCK == player1->getLastOpponentMove());
  ASSERT_TRUE( Weapon::ROCK == player1->getSecondToLastOpponentMove());
  ASSERT_TRUE( weapon1 == Weapon::SCISSORS );

  delete player1;
}

TEST(Test, EngineC_opponentGivesPAPERTwoTimes)
{
  srand(time(NULL));
  Engine* player1 = new EngineC;

  Weapon weapon1{};
  Weapon weapon2{};

  weapon1 = player1->getWeapon();
  weapon2 = Weapon::PAPER;
  
  player1->saveEngineMove(weapon1);
  player1->saveOpponentMove(weapon2);

  weapon1 = player1->getWeapon();
  weapon2 = Weapon::PAPER;
  
  player1->saveEngineMove(weapon1);
  player1->saveOpponentMove(weapon2);

  weapon1 = player1->getWeapon();
  ASSERT_TRUE( Weapon::PAPER == player1->getLastOpponentMove());
  ASSERT_TRUE( Weapon::PAPER == player1->getSecondToLastOpponentMove());
  ASSERT_TRUE( weapon1 == Weapon::ROCK );

  delete player1;
}

TEST(Test, EngineC_opponentGivesSCISSORSTwoTimes)
{
  srand(time(NULL));
  Engine* player1 = new EngineC;

  Weapon weapon1{};
  Weapon weapon2{};

  weapon1 = player1->getWeapon();
  weapon2 = Weapon::SCISSORS;
  
  player1->saveEngineMove(weapon1);
  player1->saveOpponentMove(weapon2);

  weapon1 = player1->getWeapon();
  weapon2 = Weapon::SCISSORS;
  
  player1->saveEngineMove(weapon1);
  player1->saveOpponentMove(weapon2);

  weapon1 = player1->getWeapon();
  ASSERT_TRUE( Weapon::SCISSORS == player1->getLastOpponentMove());
  ASSERT_TRUE( Weapon::SCISSORS == player1->getSecondToLastOpponentMove());
  ASSERT_TRUE( weapon1 == Weapon::PAPER );

  delete player1;
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
