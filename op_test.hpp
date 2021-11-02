<<<<<<< HEAD
#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
=======
#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
using namespace std; 
>>>>>>> 09b8a07b637d07c81d224e2d0502faab51752727

class Op : public Base {
    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return ""; }
};

<<<<<<< HEAD
#endif //__OP_HPP__
=======
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
>>>>>>> 09b8a07b637d07c81d224e2d0502faab51752727
