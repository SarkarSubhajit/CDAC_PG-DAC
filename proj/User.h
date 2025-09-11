#ifndef USER_H
#define User_H

#include <string>

class User {
    int monthly;
    int limit;
    double discount;

    public:
        User();
        User(int mon, int add, double disc);
        ~user();

        virtual double billing(double data) = 0;
        virtual void display();
};
