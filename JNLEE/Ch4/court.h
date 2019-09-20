#ifndef COURT
#define COURT
#include <iostream>

using namespace std;

class witness {
private:
    string testification = "eee";
public:
  
    string testify() {
        return testification;
    }
};

class rabbit {
public:
    witness* callwitness() {
        return new witness();
    }
};

class judge {
private:
    rabbit r;
public:
    string result = "The result is ";
    string judgement() {
        witness* w = r.callwitness();
        return result + w->testify();
    }
    


};

class order {
public:
    judge j;
    string openjudge() {
        return j.judgement();
    }  
};


#endif
