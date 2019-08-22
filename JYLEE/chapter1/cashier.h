#ifndef CASHIER_H_
#define CASHIER_H_

#include "coffee.h"
#include "barista.h"

class Cashier{
public:
    Coffee orderCoffeeToBarista(int money, std::string kindOfCoffee){
        std::cout << "Cashier just got order of one coffee" << std::endl;

        Coffee coffee;
        Barista barista;

        std::cout << "Sending request to barista to make Jason's coffee" << std::endl;
        coffee = barista.makeCoffee(kindOfCoffee);

        if(coffee.isDone){
            return coffee;
        }
    }
};

#endif