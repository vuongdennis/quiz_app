#include "gtest/gtest.h"

#include "difficulty_easy_test.hpp"
#include "difficulty_medium_test.hpp"
#include "difficulty_hard_test.hpp"
#include "point_gain_test.hpp"
#include "point_loss_test.hpp"
#include "point_streak_big_test.hpp"
#include "point_streak_small_test.hpp"
#include "question_tests.hpp"

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
