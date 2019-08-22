#ifndef COFFEE_H_
#define COFFEE_H_

#include <string>
#include <iostream>

class Coffee{
public:
    bool isDone = false;
    std::string kindOfCoffee; 

    void makeCoffee(std::string kind){
        kindOfCoffee = kind;
    }

    void setCoffeeIsDone(){
        isDone = true;
    }
};

#endif