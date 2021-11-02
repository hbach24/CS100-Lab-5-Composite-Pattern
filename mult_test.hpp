#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"

TEST(MultTest, MultEvaluate8and9) {
    Base* x = new Op(8);
    Base* y = new Op(9);   
    Mult* test = new Mult(x, y);
    EXPECT_EQ(test->evaluate(), 72);
}

TEST(MultTest, MultEvaluateNegPos) {
    Base* x = new Op(-7);
    Base* y = new Op(5);
    Mult* test = new Mult(x, y);
    EXPECT_EQ(test->evaluate(), -35);
}

TEST(MultTest, MultEvaluateNegNeg) {
    Base* x = new Op(-5);
    Base* y = new Op(-3);
    Mult* test = new Mult(x, y);
    EXPECT_EQ(test->evaluate(), 15);
}

TEST(MultTest, MultEvaluateZero) {
     Base* x = new Op(0);
     Base* y = new Op(2);
     Mult* test = new Mult(x, y);
     EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateDoubles) {
     Base* x = new Op(2.1);
     Base* y = new Op(1.2);
     Mult* test = new Mult(x, y);
     EXPECT_EQ(test->evaluate(), 2.52);
}

TEST(MultTest, MultString4and5) {
     Base* x = new Op(4);
     Base* y = new Op(5);
     Mult* test = new Mult(x, y);
     EXPECT_EQ(test->stringify(), "(4.000000 * 5.000000)");   
}

TEST(MultTest, MultPosNeg) {
     Base* x = new Op(3);
     Base* y = new Op(-2);
     Mult* test = new Mult(x, y);
     EXPECT_EQ(test->stringify(), "(3.000000 * -2.000000)");
}

#endif //__MULT_TEST_HPP__
