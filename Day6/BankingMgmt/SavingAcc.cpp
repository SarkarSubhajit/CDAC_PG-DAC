#include <iostream>
#include <cstring>
#include "SavingAcc.h"
using namespace std;

double SavingAcc::interest = 0.04;
int SavingAcc::min_bal = 20000;

SavingAcc::SavingAcc() {
    cheque = 0;
}
SavingAcc::SavingAcc(const char* fnm, const char* lnm, long mb, const char* em, long long ch):Account(fnm, lnm, mb, em) {
    cheque = ch;
}
SavingAcc::~SavingAcc() {
    // destructor
}

inline void SavingAcc::setCheque(long long ch) {
    cheque = ch;
}
inline long long SavingAcc::getCheque() {
    return cheque;
}
inline double SavingAcc::getInterest() {
    return interest;
}
inline int SavingAcc::getmin_Bal() {
    return min_bal;
}
void SavingAcc::display() {
    Account::display();
    cout << "Account Type : Savings" << endl;
    cout << "Cheque No. : " << cheque << endl;
}
