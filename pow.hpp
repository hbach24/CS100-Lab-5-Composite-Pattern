#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <string>
#include <cmath>

using namespace std;

class Pow: public Base{
        public:
                Pow(Base* op1, Base* op2): Base() {
                        base = op1;
                        power = op2;
                }
                virtual double evaluate() {return pow(base->evaluate(), power->evaluate());}
                virtual string stringify() {return "("+to_string(base->evaluate())+"**"+to_string(power->evaluate())+")";}

        private:
                Base* base;
                Base* power;
};

#endif
