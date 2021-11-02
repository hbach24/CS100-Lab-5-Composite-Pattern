#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "testing_mock.hpp"

using namespace std;

TEST(AddTest, AddZeroAndZero){
	Base* op1 = new ZeroOp();
	Base* op2 = new ZeroOp();
	Add* sum = new Add(op1, op2);
	EXPECT_DOUBLE_EQ(0, sum->evaluate());
	EXPECT_EQ("(0.000000+0.000000)", sum->stringify());
}

TEST(AddTest, AddTwoPos) {
	Base* op1 = new PosOp();
	Base* op2 = new PosOp();
	Add* sum = new Add(op1, op2);
	EXPECT_DOUBLE_EQ(8.4, sum->evaluate());
	EXPECT_EQ("(4.200000+4.200000)", sum->stringify());
}

TEST(AddTest, AddTwoNeg) {
	Base* op1 = new NegOp();
	Base* op2 = new NegOp();
	Add* sum = new Add(op1, op2);
	EXPECT_DOUBLE_EQ(-7.0, sum->evaluate());
	EXPECT_EQ("(-3.500000+-3.500000)", sum->stringify());
}

TEST(AddTest, AddPosNeg) {
	Base* op1 = new PosOp();
	Base* op2 = new NegOp();
	Add* sum = new Add(op1, op2);
	EXPECT_DOUBLE_EQ(0.7, sum->evaluate());
	EXPECT_EQ("(4.200000+-3.500000)", sum->stringify());
}


#endif
