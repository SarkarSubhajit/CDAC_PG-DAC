#include <iostream>
#include <cstring>
#include "CurrentAcc.h"
using namespace std;

double CurrentAcc::interest = 0.01;
int CurrentAcc::min_bal = 1000;

CurrentAcc::CurrentAcc() {
    avg_bal = 0;
    transaction = 0;
    update();
}
CurrentAcc::CurrentAcc(const char* fnm, const char* lnm, long mb, const char* em, double bal):Account(fnm, lnm, mb, em) {
    avg_bal = bal;
    update();
}
CurrentAcc::~CurrentAcc() {
    // destructor
}

void CurrentAcc::update() {
    if (avg_bal < 50000)
        transaction = 5;
    else if (avg_bal < 200000)
        transaction = 10;
    else if (avg_bal < 1000000)
        transaction = 30;
    else
        transaction = 50;
}

inline void CurrentAcc::setavgBal(double bal) {
    avg_bal = bal;
    update();
}
double CurrentAcc::getavgBal() {
    return avg_bal;
}
inline double CurrentAcc::getInterest() {
    return interest;
}
inline int CurrentAcc::getmin_Bal() {
    return min_bal;
}
void CurrentAcc::display() {
    Account::display();
    cout << "Account Type : Current" << endl;
    cout << "Average Annual Balance : " << avg_bal<< endl;
    cout << "Transaction limit/Day : " << transaction << endl;
    cout << "-----------------------" << endl;
}