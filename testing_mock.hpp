#ifndef __TESTING_MOCK_HPP__
#define __TESTING_MOCK_HPP__

#include "base.hpp"
using namespace std;
class NegOp: public Base {
    public:
        NegOp() { }

        virtual double evaluate() { return -3.5; }
        virtual string stringify() { return "(-3.5)"; }
};

class PosOp: public Base {
	public:
		PosOp(){}
		virtual double evaluate() {return 4.2;}
		virtual string stringify() {return "4.2";}
};

class ZeroOp: public Base {
	public: 
		ZeroOp() {}
		virtual double evaluate() {return 0.0;}
		virtual string stringify() {return "0.0";}
};

class Pos2Op: public Base {
        public:
                Pos2Op(){}
                virtual double evaluate() {return 2;}
                virtual string stringify() {return "2";}
};

class Neg3Op: public Base {
    public:
        Neg3Op() { }

        virtual double evaluate() { return -3; }
        virtual string stringify() { return "-3"; }
};




#endif
