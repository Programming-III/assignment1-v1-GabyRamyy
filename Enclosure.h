#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <string>
#include "Animal.h"
using namespace std;

class Enclosure{
    private:
        Animal* animals;
        int capacity;
        int currentCount;
    public:
        Enclosure();
        Enclosure(Animal* a,int c,int cc);
        ~Enclosure();
        void addAnimal(Animal* a);
        void displayAnimals();
        void setCapacity(int c);
        void setCurrentCount(int cc);
        int getCapacity();
        int getCurrentCount();



};








#endif
