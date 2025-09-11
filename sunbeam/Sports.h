#ifndef SPORTS_H
#define SPORTS_H

//#include "Person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Sports {
    string spname;
    double fees;

    public:
        Sports();
        Sports(const string& str, double db);
        ~Sports();

        // setters
        void setSpname(const string& str);
        void setFees(double db);

        // getters
        const string& getSpname() const;
        double getFees() const;

        void display() const;
};

#endif