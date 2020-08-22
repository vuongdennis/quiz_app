#ifndef __DIFFICULTY_HARD_TEST_HPP__
#define __DIFFICULTY_HARD_TEST_HPP__

#include "../src/difficulty.hpp"
#include "../src/difficulty_hard.hpp"

#include "gtest/gtest.h"

TEST(DifficultyHardTest, GetHard){
        Hard* x = new Hard();
        EXPECT_EQ(x->getDifficulty(), 2);
}

#endif //__DIFFICULTY__HARD_TEST_HPP__

