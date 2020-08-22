#ifndef __POINT_GAIN_TEST_HPP__
#define __POINT_GAIN_TEST_HPP__

#include "../src/point_gain.hpp"

#include "gtest/gtest.h"

TEST(PointGainTest, PointGainPointChange1){
        PointGain* x = new PointGain();
        EXPECT_EQ(x->PointChange(0), 1);
}

TEST(PointGainTest, PointGainPointChange2){
        PointGain* x = new PointGain();
        EXPECT_EQ(x->PointChange(100000), 100001);
}

#endif //__POINT_GAIN_TEST_HPP__

