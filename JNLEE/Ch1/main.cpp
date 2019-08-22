#include <iostream>

using namespace std;

class Coffee {
public:
    enum Menu{
        LATTE = 100, AMERICANO = 2, CARAMEL_MACHIATTO = 400
    };
    Menu type;
    Coffee(Menu m) {
        type = m;
    }
};

class Barista {
public:
    Coffee makeCoffee(Coffee::Menu m) {
        return Coffee(m);
    }
};

class Casher {
public:
    Barista b;

    Coffee orderCoffee(Coffee::Menu m) {
        return b.makeCoffee(m);
    }
};

class Customer {
public:
    int weights = 70;
    void getInStarbucks(Coffee::Menu menu) {
        Casher c;
        drinkCoffee(c.orderCoffee(menu));
    }

private:
    int drinkCoffee(Coffee c) {
        weights += (c.type / 100);
    }
};

int main(){
    Customer c;

    c.getInStarbucks(Coffee::AMERICANO);

    cout<< "Now His weights : " << c.weights << "\n";

    return 0;
}
