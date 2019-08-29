#ifndef ALICE_H_
#define ALICE_H_

#include <string>
#include "things.h"

using namespace std;


class Person{
public:
    void drink();
    void move();
};

class Alice : public Person{
public:
    Alice();
    
    Alice() : height_(130), location_("Hall") {};

    void pickJuice(Bottle& b){
        juice_ = b;
    }

    void drinkBeverage(){
        height_ -= juice_.drunken((double)1.0);
    }

    void pickMushroom(Mushroom& m){
        mushroom_ = m;
    }

    bool passTheDoor(){
        try{
            if( (height_ > 40) || (!location_.compare("hall")) ){
                throw "can not pass";
            }

            location_ = "Beautiful Garden";
            return true;
        }
        catch(std::string exceptionStr){
            cout << "alice" << exceptionStr << endl;
            return false;
        }
    }

    Height getAlicesHeight(){
        return height_;
    }

    Location getAlicesLocation(){
        return location_;
    }


    

private:
// Alice can have states
    Bottle juice_;
    Mushroom mushroom_;

    Height height_;
    Location location_;
    


};


#endif