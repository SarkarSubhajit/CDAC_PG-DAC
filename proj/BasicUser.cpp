#include "BasicUser.h"
#include <iostream>
#include <string>

BasicUser::BasicUser(int mon, int add, double disc, double data) : User(mon, add, disc) {
    monthly = 500;
    limit = 50;
    discount = 0;
    this->data = data;
}
/*
// setters
void BasicUser::setMonthly(int mon) { monthly = mon; }
void User::setAdditioin(int add) { addition = add; }
void User::setDiscount(double disc) { discount = disc; }

// getters
int User:: getMonthly() { return monthly; }
int User:: getAddition() { return addition; }
double User:: getDiscount() { return discount; }
*/

double BasicUser::billing(double data) {
    if (data > limit){
        bill = monthly + ((data - limit) * 5);
    }
    else
        bill = monhtly;
}


void User::display() {
    cout << "Monthly Subscription : " << monthly << endl;
    cout << "Additonal Data Charge per 5 GB : " << additoin << endl;
    //cout << "Discount : " << discount << endl;
    cout << "TOtal Bill : " << bill << endl;
}