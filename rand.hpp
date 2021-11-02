#ifndef __RAND_HPP__
#define __RAND_HPP__

#include <stdlib.h>
#include "base.hpp"

using namespace std;

class Rand : public Base {
    protected:
        double v;

    public:
        Rand() : Base() { v = rand()%100; }
        virtual double evaluate() { return v; }
        virtual std::string stringify() { return to_string(v); }
};

#endif //__RAND_HPP__

