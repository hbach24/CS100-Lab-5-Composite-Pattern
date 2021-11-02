#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivEvaluate10and5) {
    Base* x = new Op(10);
    Base* y = new Op(5);   
    Div* test = new Div(x, y);
    EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivEvaluateNegPos) {
    Base* x = new Op(-14);
    Base* y = new Op(2);
    Div* test = new Div(x, y);
    EXPECT_EQ(test->evaluate(), -7);
}

TEST(DivTest, DivEvaluateNegNeg) {
    Base* x = new Op(-15);
    Base* y = new Op(-3);
    Div* test = new Div(x, y);
    EXPECT_EQ(test->evaluate(), 5);
}

TEST(DivTest, DivEvaluateZero) {
     Base* x = new Op(0);
     Base* y = new Op(2);
     Div* test = new Div(x, y);
     EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivEvaluateDoubles) {
     Base* x = new Op(4.2);
     Base* y = new Op(2.1);
     Div* test = new Div(x, y);
     EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivString4and5) {
     Base* x = new Op(24);
     Base* y = new Op(6);
     Div* test = new Div(x, y);
     EXPECT_EQ(test->stringify(), "(24.000000 / 6.000000)");   
}

TEST(DivTest, DivEvaluateUndef) {
    Base* x = new Op(8);
    Base* y = new Op(0);
    Div* test = new Div(x, y);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(DivTest, DivPosNeg) {
     Base* x = new Op(4);
     Base* y = new Op(-2);
     Div* test = new Div(x, y);
     EXPECT_EQ(test->stringify(), "(4.000000 / (-2.000000))");
}

#endif //__DIV_TEST_HPP__
