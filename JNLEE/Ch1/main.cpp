#include <iostream>

using namespace std;


class Coffee {
public:
    int cal, cafein;
    Coffee(int _cal, int _cafein) : cal(_cal), cafein(_cafein) {}
};
class Americano : public Coffee {
public :
    Americano() : Coffee(20, 100){}  
};

class Machiatto : public Coffee {
public :
    Machiatto() : Coffee(100, 400){}  
};

class Latte : public Coffee {
public :
    Latte() : Coffee(50, 200){}  
};

class Starbucks {
public:
    enum Menu{
        LATTE = 5200, AMERICANO = 4000, CARAMEL_MACHIATTO = 7300
    };
    int money = 100000;
    
    void sellCoffee(Menu m) {
        money += m;
    }
};




class Barista {
public:
    Coffee makeCoffee(Starbucks::Menu m) {
        switch(m) {
        case Starbucks::AMERICANO :
            return Americano();
        case Starbucks::CARAMEL_MACHIATTO :
            return Machiatto();
        case Starbucks::LATTE :
            return Latte();
        default :
            return Coffee(1, 100000000);
        }
        
    }
};

class Casher {
public:
    Barista b;
    Starbucks s;

    Coffee orderCoffee(Starbucks::Menu m) {
        s.sellCoffee(m);
        cout << "Current Budget in Starbucks : "<< s.money << "\n";
        return b.makeCoffee(m);
    }
};

class Customer {
public:
    int weights = 70;
    int happiness = 20;
    void getInStarbucks(Starbucks::Menu menu) {
        Casher c;
        drinkCoffee(c.orderCoffee(menu));
    }

private:
    int drinkCoffee(Coffee c) {
        weights += (c.cal / 20);
        happiness += c.cafein;
    }
};

int main(){
    Customer c;

    c.getInStarbucks(Starbucks::AMERICANO);

    cout<< "Now His weights : " << c.weights << "\n";

    return 0;
}
