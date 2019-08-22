#include <iostream>

using namespace std;

enum Menu{
        LATTE = 5200, AMERICANO = 4000, CARAMEL_MACHIATTO = 7300
    };

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

class Barista {
public:
    Coffee makeCoffee(Menu m) {
        switch(m) {
        case AMERICANO :
            return Americano();
        case CARAMEL_MACHIATTO :
            return Machiatto();
        case LATTE :
            return Latte();
        default :
            return Coffee(1, 100000000);
        }
        
    }
};

class Starbucks;
class Casher{
public:
    Barista b;
    Starbucks* s;
    void hired(Starbucks* s);
    Coffee getOrder(Menu m);
};

class Starbucks {
public:
Casher* casher;
    
    int money = 100000;
    
    void sellCoffee(Menu m) {
        money += m;
    }

    Casher* getCasher() {
        casher = new Casher();
        casher->hired(this);
        return casher;
    }
};

void Casher::hired(Starbucks* _s) {
    s = _s;
}

Coffee Casher::getOrder(Menu m) {
    s->sellCoffee(m);
    std::cout << "Current Budget in Starbucks : " << s->money << "\n";
    return b.makeCoffee(m);
}

class Customer {
public:
    int weights = 70;
    int happiness = 20;
    void getInStarbucks(Starbucks sb) {
        drinkCoffee(order(sb));
    }

private:
    Coffee order(Starbucks sb) {
        Casher* c = sb.getCasher();
        return c->getOrder(thought());
    }

    int drinkCoffee(Coffee c) {
        weights += (c.cal / 20);
        happiness += c.cafein;
    }

    Menu thought() {
        return Menu::CARAMEL_MACHIATTO;
    }
};

int main(){
    Customer c;
    Starbucks s;
    c.getInStarbucks(s);

    cout<< "Now His weights : " << c.weights << "\n";

    return 0;
}
