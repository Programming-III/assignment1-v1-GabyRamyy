#ifndef  BIRD_H
#define  BIRD_H
#include <string>
#include "Animal.h"
using namespace std;

class Bird: public Animal{

    private:
        float wingSpan;
    public:
        Bird();
        Bird(string name, int age, bool isHungry,float wingS);
        ~Bird();
        void setWingSpan(float wing);
        string getWingSpan();
        void display() override;


};

#endif
