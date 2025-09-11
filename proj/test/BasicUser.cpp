#include "BasicUser.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

BasicUser::BasicUser(double u) : User(u) {}
BasicUser::~BasicUser() {}

double BasicUser::calcBill() {
            double bill = 500.00;
            if (usage > 50) // in GB
                bill += (usage - 50) * 5;
            return bill;
        }

string BasicUser::getBill(const string& str) {
    double bill = calcBill();
    stringstream ss;
    ss << "Type: Basic"
        << "Extra: " << ((usage > 50) ? ((usage - 50) * 5) : 0)
        << "Total: " << bill;
    return ss.str();
}

void BasicUser::display(const string& str) {
    cout << getBill(str) << endl;
}
