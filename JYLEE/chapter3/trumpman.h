#ifndef TRUMPMAN_H_
#define TRUMPMAN_H_

#include "trump.h"

class TrumpHuman : public Trump{
public:
    TrumpHuman(Shape sh, Number num){
        shape = sh;
        number = num;
    }

    void flip() {
        // Trumphuman also can flip
    }

    void layDown(){
        // Trumphuman also can laydown
    }    

    void walk(){
        // Trumphuman can walk
    }
};

#endif