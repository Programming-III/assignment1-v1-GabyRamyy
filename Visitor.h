#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
class Visitor{

    private:
        string visitorName;
        int ticketsBought;
    public:
        Visitor();
        Visitor(string vN, int tickets);
        ~Visitor();
        void displayInfo();
        string getVisitorName();
        int getTitcketsBought();
};






#endif
