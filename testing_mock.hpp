#ifndef __TESTING_MOCK_HPP__
#define __TESTING_MOCK_HPP__

#include "base.hpp"
using namespace std;
class NegOp: public Base {
    public:
        NegOp() { }

        virtual double evaluate() { return -3.5; }
        virtual string stringify() { return "-3.5"; }
}

class PosOp: public Base {
	public:
		PosOp(){}
		virtual double evaluate() {return 4.2;}
		virtual string stringify() {return "4.2";}
}

class ZeroOp: public Base {
	public: 
		ZeroOp() {}
		virtual double evaluate() {return 0.0;}
		virtual string evaluate() {return "0.0";}
}


#endif
