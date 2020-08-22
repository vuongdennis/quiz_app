#ifndef __DIFFICULTY_EASY_TEST_HPP__
#define __DIFFICULTY_EASY_TEST_HPP__

#include "../src/difficulty.hpp"
#include "../src/difficulty_easy.hpp"

#include "gtest/gtest.h"

TEST(DifficultyEasyTest, GetEasy){
	Easy* x = new Easy();
	EXPECT_EQ(x->getDifficulty(), 0);
}

#endif //__DIFFICULTY__EASY_TEST_HPP__
