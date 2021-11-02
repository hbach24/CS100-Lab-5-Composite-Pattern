#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include <string>
#include "base.hpp"
#include "rand.hpp"

TEST(RandTest, RandEvaluate) {
    Rand* test = new Rand();
    EXPECT_TRUE((test->evaluate() >= 0) && (test->evaluate() < 100));
}

TEST(RandTest, RandString) {
    Rand* test = new Rand();
    EXPECT_TRUE((stod(test->stringify())) >= 0 && (stod(test->stringify()) < 100));
}

#endif //__RAND_TEST_HPP__
