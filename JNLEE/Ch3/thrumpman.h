#ifndef THRUMPHMAN
#define THRUMPHMAN

#include "thrump.h"
#include <iostream>
class Thrumphman : public Thrumph {
private: 
    int pos = 1;
public:
    void walk(int speed) {
        pos += speed;
        std::cout << "current pos : "<< pos << "\n";   
    }
};

#endif