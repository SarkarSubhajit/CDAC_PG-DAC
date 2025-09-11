#include "User.h"
#include <iostream>
#include <string>

User::User(int mon, int add, double disc) : monthly(mon), limit(add), discount(disc) {}

// setters
void User::setMonthly(int mon) { monthly = mon; }
void User::setLimit(int add) { limit = add; }
void User::setDiscount(double disc) { discount = disc; }

// getters
int User:: getMonthly() { return monthly; }
int User:: getLimit() { return limit; }
double User:: getDiscount() { return discount; }

void User::display() {
    cout << "Monthly Subscription : " << monthly << endl;
    cout << "Additonal Data Charge per 5 GB : " << limit << endl;
    cout << "Discount : " << discount << endl;
}