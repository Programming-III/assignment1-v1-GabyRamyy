#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

//                             Animal                          //
Animal:: Animal(){
    name ="";
    age = 0;
    isHungry= false;
}
       
Animal::Animal(string n, int a, bool is){
    name = n;
    age = a;
    isHungry= is;
}

Animal::~Animal(){}

void Animal::  display(){
        cout<< "Name "<< getName()<<endl;
        cout<< "Is Hungry "<< getHungry()<<endl;
        cout<< "Age "<< getAge() <<endl;
}

void Animal:: feed(){
    cout<<"Is the Animal hungry: "<<getHungry()<<endl;

}

void Animal:: setName(string n){
    name= n;
}

void Animal:: setAge(int a){
    age = a;

}
        
void Animal:: setHungry(bool H){
    isHungry = H;
}
string Animal:: getName(){
    return name;
}

int Animal:: getAge(){
    return age;
}
bool Animal::  getHungry(){
    return isHungry;
}

//                             Mammal                          //
 Mammal:: Mammal(){
    furColor = "";
 }
       Mammal:: Mammal(string name, int age, bool isHungry,string furC){
            furColor = furC;
       }
       Mammal:: ~Mammal(){}
       
        void Mammal:: display()  {
             cout<< "Name "<< getName()<<endl;
        cout<< "Is Hungry "<< getHungry()<<endl;
        cout<< "Age "<< getAge() <<endl;
        cout<< "Fur Color: "<< getFurColor();
        }
        void Mammal:: setFurColor(string fur){
            furColor = fur;
        }
        string Mammal:: getFurColor(){
            return furColor;
        }

//                            Bird                     //
        Bird:: Bird(){
            wingSpan= 0.0;
        }
       Bird:: Bird(string name, int age, bool isHungry,float wingS){
        wingSpan= wingS;
       }
       Bird:: ~Bird(){

       }
        void Bird:: setWingSpan(float wing){
            wingSpan= wing;
        }
        string Bird:: getWingSpan(){
            return wingSpan;
        }
        void Bird:: display(){
         cout<< "Name "<< getName()<<endl;
        cout<< "Is Hungry "<< getHungry()<<endl;
        cout<< "Age "<< getAge() <<endl;
        cout<< "Wing Span: "<< getWingSpan()<<endl;

        
    }
    
//                       Reptile                          //

        Reptile :: Reptile(){
            isVenomous= false;
        }
       Reptile :: Reptile(string name, int age, bool isHungry,bool isVe){
        isVenomous= isVe;
       }
       Reptile :: ~Reptile(){}
        void Reptile :: setIsVenomous(bool isV){
            isVenomous= isV;
        }
        string Reptile :: getIsVenomous(){
            return isVenomous;
        }
        void  Reptile :: display(){
             cout<< "Name "<< getName()<<endl;
        cout<< "Is Hungry "<< getHungry()<<endl;
        cout<< "Age "<< getAge() <<endl;
        cout<< "Is Venomous: "<< getIsVenomous()<<endl;
        }

//                   Enclosure                           //

        Enclosure:: Enclosure(){
            animals= nullptr;
            capacity=0;
            currentCount= 0;
            
        }
       Enclosure:: Enclosure(Animal* a,int c,int cc){
        
        capacity= c;
        currentCount= cc;
        a= new Enclosure[c];
       }
        Enclosure:: ~Enclosure(){
            delete[] a;
        }
        void Enclosure:: addAnimal(Animal* aa){
            a[currentCount++]=aa;
        }
        void Enclosure:: displayAnimals(){

        }
        void Enclosure:: setCapacity(int c){
            capacity=c;
        }
        void Enclosure:: setCurrentCount(int cc){
            currentCount= cc;
        }
        int Enclosure:: getCapacity(){
            return capacity;
        }
        int Enclosure:: getCurrentCount(){
            return currentCount;
        }
//                        Visitor                         //
        Visitor:: Visitor(){
            visitorName = "";
            ticketsBought= 0;
        }
        Visitor:: Visitor(string vN, int tickets){
            visitorName= vN;
            ticketsBought= tickets;
        }
        Visitor:: ~Visitor(){}
        void Visitor:: displayInfo(){

        }
        string Visitor:: getVisitorName(){
            return visitorName;
        }
        int Visitor::  getTitcketsBought(){
            return ticketsBought;
        }
// ============== MAIN FUNCTION ==============
int main() {
    
       Enclosure en(*a[100],100,20);
            Animal lion("leo",5,true);
            Animal Parrot("bird",2,false);
            Reptile rep("snake",3,true,true);
            en.displayAnimals();
            lion.display();
            Parrot.display();
            rep.display();
    
    return 0;
}
