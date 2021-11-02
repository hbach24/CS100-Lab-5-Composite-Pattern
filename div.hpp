#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include "op.hpp"

using namespace std;

class Div : public Base {
    private:
        Base* left;
	Base* right;

    public:
        Div(Base* l, Base* r) : Base() { 
		left = l;
		right = r;
	}

        virtual double evaluate() { 
		double a = left->evaluate();
		double b = right->evaluate();
	if(b == 0) {
	  return -1;
	}
	return a/b; 
	}

        virtual std::string stringify() { 
		string str = "(";
		if(left->evaluate() < 0) {
			str += "(";
			str += left->stringify() + ")";
		}
		else {
			str += left->stringify();
		}

		str += " / ";
		if(right->evaluate() < 0) {
			str += "(";
			str += right->stringify() + ")";
		}
		else {
			str += right->stringify();
		}
	return str + ")";	
	}
	};

#endif //__DIV_HPP__
