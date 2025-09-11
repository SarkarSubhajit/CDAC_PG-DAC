#include "Product.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Product::Product(int id, const string& str, double price) : pid(id), pname(str), price(price) {}
Product::~Product() {}

// setters
void Product::setPid(int id) { pid = id; }
void Product::setPrice(double price) { this->price = price; }
void Product::setPname(const string& str) { pname = str; }

// getters
int Product::getPid() const{ return pid; }
const string& Product::getPname() const{ return pname; }
double Product::getPrice() const{ return price; }

void Product::display() const{ 
    cout << "[PID: " << pid << "\tPNAME: " << pname << "\tPRICE: " << price << "]" << endl;
}