#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "testing_mock.hpp"

TEST(AddTest, AddZeroAndZero){
	ZeroOp* op1;
	ZeroOp* op2;
	Add* sum = new Add(op1, op2);
	EXPECT_EQ(0, sum->evaluate())
	EXPECT_EQ("(0.0+0.0)", sum->stringify())
}

TEST(ADDTEST, AddTwoPos) {
	PosOp* op1;
	PosOp* op2;
	Add* sum = new Add(op1, op2);
	EXPECT_EQ()
}


#endif
