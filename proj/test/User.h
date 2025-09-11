#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
    protected:
        double usage;

    public:
        User(double u);
        virtual ~User();

        void setUsage(double u);
        double getUsage();

        virtual double calcBill() = 0;
        virtual string getBill(const string& str = "") = 0;
        virtual void display(const string& str = ""); 
};

#endif