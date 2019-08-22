#include "barista.h"
#include "cashier.h"
#include "customer.h"
#include "coffee.h"

int main(){
    Customer Jason(10000, "Ice Americano");
    Cashier cashier;
    Barista barista;

    std::cout << "Jason ordering coffee.." << std::endl;
    Jason.myCoffee = cashier.orderCoffeeToBarista(5000, Jason.kindOfCoffee);

    if(Jason.myCoffee.isDone){
        std::cout << "Jason successfully got his coffee" << std::endl;
    }    

    return 0;
}