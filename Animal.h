#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;


class Animal{

    private:
        string name;
        int age;
        bool isHungry;

    public:
        Animal();
        Animal(string name, int age, bool isHungry);
        ~Animal();
         void display();
        void feed();
        void setName(string n);
        void setAge(int a);
        void setHungry(bool H);
        string getName();
        int getAge();
        bool getHungry();

};

#endif
