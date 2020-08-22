#ifndef __POINT_STREAK_SMALL_TEST_HPP__
#define __POINT_STREAK_SMALL_TEST_HPP__

#include "../src/point_streak_small.hpp"

#include "gtest/gtest.h"

TEST(PointStreakSmallTest, PointStreakSmallPointChange1){
        PointStreakSmall* x = new PointStreakSmall();
        EXPECT_EQ(x->PointChange(0), 2);
}

TEST(PointStreakSmallTest, PointStreakSmallPointChange2){
        PointStreakSmall* x = new PointStreakSmall();
        EXPECT_EQ(x->PointChange(100000), 100002);
}

#endif //__POINT_STREAK_SMALL_TEST_HPP__

