#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__
//test
#include "gtest/gtest.h"

#include "op.hpp"
using namespace std; 

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringNonZero) {
    Op* test = new Op(9);
    string s = "9.000000";
    EXPECT_EQ(test->stringify(), s);
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-10);
    EXPECT_EQ(test->evaluate(), -10);
}

TEST(OpTest, OpStringNegative) {
    Op* test = new Op(-3);
    EXPECT_EQ(test->stringify(), "-3.000000");
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpStringZero) { 
    Op* test = new Op(0);
    EXPECT_EQ(test->stringify(), "0.000000");
}

#endif //__OP_TEST_HPP__
