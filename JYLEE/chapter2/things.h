#ifndef THINGS_H_
#define THINGS_H_

#include <iostream>

using namespace std;

using Height = double;
using Location = std::string;

enum class kind{
    ORANGE_JUICE,
    GRAPE_JUICE,
    APPLE_JUICE
};

class Mushroom{

};

class Bottle{
private:
    double ml_ = 500;

    // Identifier
    kind kindOfJuice_;

public:
    Bottle();

    Bottle(kind kindofjuice) : kindOfJuice_(kindofjuice) {};

    Height drunken(double qtty){
        try{
            if(ml_ - qtty){
                throw ml_;
            }
            
            ml_ -= qtty;
        }
        catch(double mililiter){
            cout << "This Bottle has empty" << endl;
        }

        return qtty * 0.2;
    }

};

class Cake{

};

class Table{
public:
    Table(Mushroom& m, Bottle& b, Cake& c): 
        tablesMushroom(m), tablesBottle(b), tablesCake(c) {}

private:
    Mushroom tablesMushroom;
    Bottle tablesBottle;
    Cake tablesCake;
};


#endif