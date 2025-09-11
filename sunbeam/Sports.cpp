#include "Sports.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Sports::Sports(const string& str, double db) : spname(str), fees(db) {}
Sports::~Sports() {}

// setters
void Sports::setSpname(const string& str) { spname = str; }
void Sports::setFees(double db) { fees = db; }

// getters
const string& Sports::getSpname() const { return spname; }
double Sports::getFees() const { return fees; }

void Sports::display() const {
    cout << "Sports Name: " << spname << endl;
    cout << "Fees: " << fees << endl;
}