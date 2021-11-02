#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"
#include "testing_mock.hpp"

using namespace std;

TEST(SubTest, SubZeroAndZero){
        Base* op1 = new ZeroOp();
        Base* op2 = new ZeroOp();
        Sub* res = new Sub(op1, op2);
        EXPECT_DOUBLE_EQ(0, res->evaluate());
        EXPECT_EQ("(0.000000-0.000000)", res->stringify());
}

TEST(SubTest, SubTwoPos) {
        Base* op1 = new PosOp();
        Base* op2 = new PosOp();
        Sub* res = new Sub(op1, op2);
        EXPECT_DOUBLE_EQ(0, res->evaluate());
        EXPECT_EQ("(4.200000-4.200000)", res->stringify());
}

TEST(SubTest, SubTwoNeg) {
        Base* op1 = new NegOp();
        Base* op2 = new NegOp();
        Sub* res = new Sub(op1, op2);
        EXPECT_DOUBLE_EQ(0, res->evaluate());
        EXPECT_EQ("(-3.500000--3.500000)", res->stringify());
}

TEST(SubTest, SubPosNeg) {
        Base* op1 = new PosOp();
        Base* op2 = new NegOp();
        Sub* res = new Sub(op1, op2);
        EXPECT_DOUBLE_EQ(7.7, res->evaluate());
        EXPECT_EQ("(4.200000--3.500000)", res->stringify());
}


#endif
