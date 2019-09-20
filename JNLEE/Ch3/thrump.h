#ifndef THRUMPH
#define THRUMPH

#include <iostream>

class Thrumph {
private:
    bool isup = true;
    bool side = false;
public: 
    void laydown() {
        isup = !isup;
        std::cout << "current up : " << isup << '\n';
    }
    void turnover() {
        side = !side;
        std::cout << "current side : " << side << '\n';
    }
};

#endif