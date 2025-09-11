#include "PremiumUser.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

PremiumUser::PremiumUser(double u, const string& code) : User(u), coupon(code) {}
PremiumUser::~PremiumUser() {}

double PremiumUser::calcBill() {
            double bill = 1000.00;
            if (usage > 100) // in GB
                bill += (usage - 100) * 5;
            if (checkCoupon<string>(coupon, string("NET50")))
                bill -= 50;
            return bill;
        }

string PremiumUser::getBill(const string& str) {
    double bill = calcBill();
    stringstream ss;
    ss << "Type: Premium"
       << "Extra: " << ((usage > 100) ? ((usage - 100) * 5) : 0)
       << "Total: " << bill;
    if (checkCoupon<string>(coupon, string("NET50")))
    ss << "\nCoupon Applied";
    return ss.str();
}

void PremiumUser::display(const string& code) {
    cout << getBill(code) << endl;
}