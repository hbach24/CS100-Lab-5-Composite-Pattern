#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include <string>

using namespace std;

class Add: public Base{
	public:
		Add(Base* op1, Base* op2): Base() {
			num1 = op1;
			num2 = op2;
		}
		virtual double evaluate() {return num1->evaluate() + num2->evaluate();}
		virtual string stringify() {return "("+to_string(num1->evaluate())+"+"+to_string(num2->evaluate())+")";}

	private:
		Base* num1;
		Base* num2;
}


#endif
