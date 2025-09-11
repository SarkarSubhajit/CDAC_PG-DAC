#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
    int pid;
    string pname;
    double price;

    public:
        Product();
        Product(int id, const string& name, double pr);
        ~Product();

        void setPid(int id);
        void setPname(const string& name);
        void setPrice(double price);

        int getPid() const;
        const string& getPname() const;
        double getPrice() const;

        void display() const;
};

#endif