/**
 * @file weapon.cpp
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
#include "Weapon.hpp"

TEST(Test, WeaponComparsion)
{
  Weapon rock = Weapon::ROCK;
  Weapon paper = Weapon::PAPER;
  Weapon scissors = Weapon::SCISSORS;

  ASSERT_TRUE( rock > scissors );
  ASSERT_TRUE( scissors > paper );
  ASSERT_TRUE( paper > rock );

  ASSERT_TRUE( rock >= scissors );
  ASSERT_TRUE( scissors >= paper );
  ASSERT_TRUE( paper >= rock );

  ASSERT_TRUE( rock == rock );
  ASSERT_FALSE( rock == scissors );
  ASSERT_FALSE( rock == paper ); 
  ASSERT_FALSE( paper == rock );
  ASSERT_TRUE( paper == paper );
  ASSERT_FALSE( paper == scissors );
  ASSERT_FALSE( scissors == rock );
  ASSERT_FALSE( scissors == paper );
  ASSERT_TRUE( scissors == scissors );

  ASSERT_FALSE( rock != rock );
  ASSERT_TRUE( rock != scissors );
  ASSERT_TRUE( rock != paper ); 
  ASSERT_TRUE( paper != rock );
  ASSERT_FALSE( paper != paper );
  ASSERT_TRUE( paper != scissors );
  ASSERT_TRUE( scissors != rock );
  ASSERT_TRUE( scissors != paper );
  ASSERT_FALSE( scissors != scissors );

  //TODO: operator>, >=, <, <=
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
