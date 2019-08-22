#ifndef BARISTA_H_
#define BARISTA_H_

#include "coffee.h"

class Barista{
public:
    Coffee makeCoffee(std::string kind){
        std::cout << "Making coffee....." << std::endl;
        // Do Something for make coffee 
        Coffee coffee;

        coffee.makeCoffee(kind);

        // making coffee....
        std::cout << "Makine coffee is done" << std::endl;
        coffee.setCoffeeIsDone();

        return coffee;
    }
};



#endif