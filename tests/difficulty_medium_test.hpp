#ifndef __DIFFICULTY_MEDIUM_TEST_HPP__
#define __DIFFICULTY_MEDIUM_TEST_HPP__

#include "../src/difficulty.hpp"
#include "../src/difficulty_medium.hpp"

#include "gtest/gtest.h"

TEST(DifficultyMediumTest, GetMedium){
        Medium* x = new Medium();
        EXPECT_EQ(x->getDifficulty(), 1);
}

#endif //__DIFFICULTY_MEDIUM_TEST_HPP__

