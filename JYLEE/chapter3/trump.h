#ifndef TRUMP_H_
#define TRUMP_H_

enum Shape{
    SPADE,
    CLOVER,
    HEART,
    DIAMOND
};

enum Number{
    ACE, TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING
};

class Trump{
public:
    void flip() {
        // Trump card can flip
    };

    void layDown() {
        // Trump card can laydown
    };

protected:
    Number number;
    Shape shape;
};

#endif