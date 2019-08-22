#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include "coffee.h"

class Customer{
public:
    Coffee myCoffee;
    int myMoney;
    std::string kindOfCoffee;

    Customer();

    Customer(int money, std::string kind) : myMoney(money), kindOfCoffee(kind){

    };
};

#endif