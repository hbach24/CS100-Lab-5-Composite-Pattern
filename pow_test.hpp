#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"
#include "testing_mock.hpp"

using namespace std;

TEST(PowTest, PowTwoPos) {
        Base* op1 = new Pos2Op();
        Base* op2 = new Pos2Op();
        Pow* res = new Pow(op1, op2);
        EXPECT_NEAR(4, res->evaluate(), 0.001);
        EXPECT_EQ("(2.000000**2.000000)", res->stringify());
}

TEST(PowTest, PowTwoNeg) {
        Base* op1 = new Neg3Op();
        Base* op2 = new Neg3Op();
        Pow* res = new Pow(op1, op2);
        EXPECT_NEAR(-0.037, res->evaluate(), 0.001);
        EXPECT_EQ("(-3.000000**-3.000000)", res->stringify());
}

TEST(PowTest, PowPosNeg) {
        Base* op1 = new PosOp();
        Base* op2 = new NegOp();
        Pow* res = new Pow(op1, op2);
        EXPECT_NEAR(0.00659, res->evaluate(), 0.001);
        EXPECT_EQ("(4.200000**-3.500000)", res->stringify());
}

TEST(PowTest, ZeroPower) {
        Base* op1 = new PosOp();
        Base* op2 = new ZeroOp();
        Pow* res = new Pow(op1, op2);
        EXPECT_NEAR(1, res->evaluate(), 0.001);
        EXPECT_EQ("(4.200000**0.000000)", res->stringify());
}



#endif
