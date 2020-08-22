#ifndef __POINT_LOSS_TEST_HPP__
#define __POINT_LOSS_TEST_HPP__

#include "../src/point_loss.hpp"

#include "gtest/gtest.h"

TEST(PointLossTest, PointLossPointChange1){
        PointLoss* x = new PointLoss(0);
        EXPECT_EQ(x->PointChange(0), 0);
}

TEST(PointLossTest, PointLossPointChange2){
        PointLoss* x = new PointLoss(0);
        EXPECT_EQ(x->PointChange(100000), 100000);
}

TEST(PointLossTest, PointLossPointChange3){
        PointLoss* x = new PointLoss(1);
        EXPECT_EQ(x->PointChange(0), -1);
}

TEST(PointLossTest, PointLossPointChange4){
        PointLoss* x = new PointLoss(1);
        EXPECT_EQ(x->PointChange(100000), 99999);
}

TEST(PointLossTest, PointLossPointChange5){
        PointLoss* x = new PointLoss(2);
        EXPECT_EQ(x->PointChange(0), -2);
}

TEST(PointLossTest, PointLossPointChange6){
        PointLoss* x = new PointLoss(2);
        EXPECT_EQ(x->PointChange(100000), 99998);
}

#endif //__POINT_LOSS_TEST_HPP__

