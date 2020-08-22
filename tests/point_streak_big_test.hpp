#ifndef __POINT_STREAK_BIG_TEST_HPP__
#define __POINT_STREAK_BIG_TEST_HPP__

#include "../src/point_streak_big.hpp"

#include "gtest/gtest.h"

TEST(PointStreakBigTest, PointStreakBigPointChange1){
        PointStreakBig* x = new PointStreakBig();
        EXPECT_EQ(x->PointChange(0), 3);
}

TEST(PointStreakBigTest, PointStreakBigPointChange2){
        PointStreakBig* x = new PointStreakBig();
        EXPECT_EQ(x->PointChange(100000), 100003);
}

#endif //__POINT_STREAK_BIG_TEST_HPP__
