#ifndef MAMMAL_H
#define MAMMAL_H
#include <string>
#include "Animal.h"
using namespace std;

class Mammal: public Animal{

    private:
        string furColor;
    public:
        Mammal();
        Mammal(string name, int age, bool isHungry,string furC);
        ~Mammal();
        void display() override;
        void setFurColor(string fur);
        string getFurColor();
        


};

#endif
